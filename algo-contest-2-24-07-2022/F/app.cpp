#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 23;

JSON setting;

void makeInput(const int testnumber, ofstream &cout) {
    ClosedSet lengthRange(250, 500);

    if (testnumber <= 10)
        lengthRange = ClosedSet(1, 10);

    int len = randInt(lengthRange);
    const string templateString = "qwertyuiopasdfghjklzxcvbnm";
    string s = "";
    for (int i = 0; i < len; ++i) {
        s += templateString[randInt(ClosedSet(0, 25))];
    }
    cout << s << endl;
    return;
}

void makeOutput(ifstream &cin, ofstream &cout) {
    string s;
    cin >> s;
    int n = s.length();
    vector <int> cnt(26, 0);
    for (int i = 0; i < n; ++i) {
        if (cnt[s[i] - 'a'] == 0) {
            cnt[s[i] - 'a'] = i + 1;
        }
    }
    for (int i = 1; i < 26; ++i)
        for (int j = 0; j <= i - 1; ++j) {
            if ((cnt[i] != 0 and cnt[j] > cnt[i]) or (cnt[j] == 0 and cnt[i] > 0)) {
                cout << "NO\n";
                return;
            }
        }
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

