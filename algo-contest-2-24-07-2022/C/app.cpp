#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 23;

JSON setting;

void makeInput(const int testnumber, ofstream &cout) {
    ClosedSet pointRange(10, 100);

    int m = randInt(pointRange);
    int n = randInt(ClosedSet(5, m));

    cout  << n << " " << m << endl;

    for (int i = 1; i <= n; ++i) {
        int u, v;
        do {
            u = randInt(ClosedSet(1, m));
            v = randInt(ClosedSet(1, m));
        } while (u > v);
        cout << u << " " << v << endl;
    }

    return;
}

void makeOutput(ifstream &cin, ofstream &cout) {
    int n, m;
    cin >> n >> m;
    
    vector <int> points(m + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int u, v;
        cin >> u >> v;
        for (int p = u; p <= v; ++p)
            points[p] = 1;
    }

    vector <int> result;
    for (int p = 1; p <= m; ++p)
        if (points[p] == 0)
            result.push_back(p);

    cout << result.size() << endl;
    for (int i = 0; i < (int)result.size(); ++i)
        cout << result[i] << (i < (int)result.size() - 1 ? " " : "");
    cout << endl;

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

