#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 23;
const int values[] = {1, 11, 111, 1111,
                    2, 22, 222, 2222,
                    3, 33, 333, 3333,
                    4, 44, 444, 4444,
                    5, 55, 555, 5555,
                    6, 66, 666, 6666,
                    7, 77, 777, 7777,
                    8, 88, 888, 8888,
                    9, 99, 999, 9999};

JSON setting;

void makeInput(const int testNumber, ofstream &cout) {
    ClosedSet queryRange(1, 1);
    ClosedSet indexRange(0, 35);

    if (testNumber > 10)
        queryRange = ClosedSet(1000, 100000);

    int queries = randInt(queryRange);
    cout << queries << endl;

    vector <int> nums(queries);
    for (int& num: nums)
        num = values[randInt(indexRange)];

    for (int num: nums)
        cout << num << endl;

    return;
}

void makeOutput(ifstream &cin, ofstream &cout) {
    int queries;
    cin >> queries;

    while (queries--) {
        string x;
        cin >> x;
        int digit = x[0] - '0';
        int len = x.length();
        int result = 10 * (digit - 1) + len * (len + 1) / 2;
        cout << result << endl;
    }

    return;
}

int main() {
    srand(time(NULL));

    cerr << "Start making testcases!\n\n";

    string ID = generateID(date);
    cerr << "Problem ID: " << ID << endl;
    cerr << "\n";

    cerr << "Reading settings!\n";
    setting.readJson("setting.json");

    cerr << "\n";

    vector <string> files;

    for (int currentTest = 1; currentTest <= setting.numberOfTestcase; ++currentTest) {
        cerr << "Making test " << currentTest << "!\n";

        const string inFileName = integerToString(currentTest) + ".in";
        const string outFileName = integerToString(currentTest) + ".out";

        ifstream inputFile;
        ofstream inFile, outFile;
        inFile.open(inFileName);
        outFile.open(outFileName);
        inputFile.open(inFileName);

        makeInput(currentTest, inFile);
        makeOutput(inputFile, outFile);

        inFile.close();
        outFile.close();
        inputFile.close();
        files.push_back(inFileName);
        files.push_back(outFileName);
    }

    cerr << "Compressing testcases into \"testcases.zip\"" << endl;
    Compress compressFile;
    compressFile.createArchiveFile(files, "testcases.zip");
    executeFile("zip.ps1");
    cerr << "Complete compression!\n";

    cerr << "\n";

    if (setting.removeClusterFiles == true) {
        cerr << "Removing *.in and *.out files\n";
        for (string file: files) {
            cerr << "Removing...\n";
            removeFile(file);
        }

        removeFile("zip.ps1");
        cerr << "Complete removing files!\n";

        cerr << "\n";
    }

    cerr << "Program complete!\n";

    return 0;
}

