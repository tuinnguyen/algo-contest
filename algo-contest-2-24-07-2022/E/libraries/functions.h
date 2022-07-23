#include <bits/stdc++.h>

using namespace std;


const int INF = 1e9 + 7;


struct ClosedSet {
    long long minValue, maxValue;

    ClosedSet(long long minV = 0, long long maxV = 0) {
        minValue = minV;
        maxValue = maxV;
    }

    long long size() {
        return (maxValue - minValue + 1);
    }

        void showSet() {
        cerr << "\n[" << minValue << "; " << maxValue << "]\n";
        return;
    }

    void showDetail() {
        cerr << "\n";
        cerr << "Elements in [" << minValue << "; " << maxValue << "]:\n";
        for (long long value = minValue; value <= maxValue; ++value)
            cerr << value << (value < maxValue ? ", " : "");
        cerr << "\n";
        cerr << "Number of elemets in set: " << (maxValue - minValue + 1) << "\n";
        cerr << "\n";
        return;
    }
};



int randInt(ClosedSet s) {
    return (rand() % s.size() + s.minValue);
}



long long randLLInt(ClosedSet s) {
    return (rand() % s.size() + s.minValue);
}



vector <int> randList(int numberOfElements, ClosedSet S, bool isDistinct = false) {
    vector <int> result;

    if (isDistinct) {
        set <int> nums;

        while (nums.size() < numberOfElements)
            nums.insert(randInt(S));

        for (int num: nums)
            result.push_back(num);
    }
    else {
        int n = randInt(ClosedSet(2, numberOfElements - 1));
        set <int> nums;

        while ((int)nums.size() < (numberOfElements - n))
            nums.insert(randInt(S));

        for (int num: nums)
            result.push_back(num);

        for (int i = 0; i < n; ++i)
            result.push_back(result[i]);
    }

    return result;
}



vector <long long> randListLL(int numberOfElements, ClosedSet S, bool isDistinct = false) {
    vector <long long> result;

    if (isDistinct) {
        set <long long> nums;

        while (nums.size() < numberOfElements)
            nums.insert(randInt(S));

        for (long long num: nums)
            result.push_back(num);
    }
    else {
        for (int i = 1; i <= numberOfElements; ++i)
            result.push_back(randInt(S));
    }

    return result;
}



string randStr(int numberOfCharacters, const string templateString = "qwertyuiopasdfghjklzxcvbnm", const bool isDistinct = false) {
    string result = "";

    if (isDistinct) {
        if (numberOfCharacters > templateString.length())
            return "ERROR";
        
        set <char> chrs;

        while (chrs.size() < numberOfCharacters)
            chrs.insert(templateString[randInt(ClosedSet(0, (int)templateString.length()))]);

        for (char chr: chrs)
            result += chr;
    }
    else {
        for (int i = 0; i < numberOfCharacters; ++i)
            result += templateString[randInt(ClosedSet(i, (int)templateString.length()))];
    }

    return result;
}


pair <int, int> calculateDifferential(vector <int> &numbers) {
    pair <int, int> result = {INF, -INF};

    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int diff = abs(numbers[i] - numbers[j]);
                result.first = min(result.first, diff);
                result.second = max(result.second, diff);
            }
        }
    }

    return result;
}



string integerToString(int number) {
    string result = "";
    while (number > 0) {
        result = char((number % 10) + '0') + result;
        number /= 10;
    }
    return result;
}



long long binaryPower(long long a, long long b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long res = binaryPower(a, b / 2);
    if (b % 2)
        return res * res * a;
    return res * res;
}



int countDigit(long long x) {
    int counter = 0;
    while (x > 0) {
        counter++;
        x /= 10;
    }
    return counter;
}



string generateID(int date) {
    string custom_template = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string result = randStr(1, "ITMC") + to_string(randInt(ClosedSet(10, 99))) + to_string(randInt(ClosedSet(10, 99))) + to_string(date) + randStr(2, custom_template) + to_string(randInt(ClosedSet(10, 99)));
    return result;
}
