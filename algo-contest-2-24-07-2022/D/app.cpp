#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 23;

JSON setting;

void makeInput(const int testnumber, ofstream &cout) {
    ClosedSet nRange (10, 100);
    ClosedSet valueRange (100, 1000);

    if (testnumber > 10) {
        nRange = ClosedSet(1000, 100000);
        valueRange = ClosedSet(10000, 1000000000);
    }

    int n = randInt(nRange);
    cout << n << "\n";
    vector <int> nums = randList(n, valueRange);
    for (int i = 0; i < n; ++i)
        cout << nums[i] << (i < n - 1 ? " " : "");
    cout << "\n";


    return;
}

void makeOutput(ifstream &cin, ofstream &cout) {
    long long sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    vector <int> a(n);
    for (int& item: a)
        cin >> item;

    sort(a.begin(), a.end());
    if (sum > a[n - 1] + a[n - 2])
        cout << "NO\n";
    else
        cout << "YES\n";
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

