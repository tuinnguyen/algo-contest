#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 21;

JSON setting;

void makeInput(const int testnumber, ofstream &cout) {
    int n = rand_int(1, 10000);
    int p = rand_int(1, n);
    cout << n << " " << p << endl;
    for (int i = 1; i <= n; ++i) {
        int flag = rand_int(0, 1);
        if (flag)
            cout << "Infected\n";
        else
            cout << "Save\n";
    }
    return;
}

void makeOutput(ifstream &cin, ofstream &cout) {
    int n, p;
    cin >> n >> p;
    vector <string> infoList(n);
    for (string info: infoList)
        cin >> info;
    if (infoList[p - 1] == "Infected")
        cout << "YES\n";
    else
        cout << "NO\n";
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
        for (string file: files)
            removeFile(file);

        removeFile("zip.ps1");
        cerr << "Complete removing files!\n";

        cerr << "\n";
    }

    cerr << "Program complete!\n";

    return 0;
}