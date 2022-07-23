#include <bits/stdc++.h>
#include "libraries/functions.h"
#include "libraries/powershell-command.h"
#include "libraries/classes.h"
#include "libraries/json-setting.h"

using namespace std;

const int date = 23;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

JSON setting;

void makeInput(const int testnumber, ofstream &cout) {
    ClosedSet matrixRange(1, 5);

    if (testnumber > 10) {
        matrixRange = ClosedSet(250, 500);
    }

    int n = randInt(matrixRange);
    int m = randInt(matrixRange);

    cout << n << " " << m << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int flag = randInt(ClosedSet(1, 3));
            if (flag == 1)
                cout << ".";
            else if (flag == 2)
                cout << "S";
            else
                cout << "W";
        }
        cout << endl;
    }

    return;
}

bool inside(int x, int y, const int n, const int m) {
    return (0 <= x and x < n and 0 <= y and y < m);
}

void makeOutput(ifstream &cin, ofstream &cout) {
    int n, m;
    cin >> n >> m;
    vector < vector < char > > a(n, vector < char > (m));
    for (vector < char > &line: a) {
        for (char &chr: line) {
            cin >> chr;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 'S') {
                for (int k = 0; k < 4; ++k) {
                    if (inside(i + dx[k], j + dy[k], n, m) and a[i + dx[k]][j + dy[k]] == 'W') {
                        cout << "NO\n";
                        return;
                    }
                }
            }
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

