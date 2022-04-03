#include <bits/stdc++.h>
using namespace std;

bool isUpperCase(char ch) {
    return ch >= 'A' and ch <= 'Z';
}

int main() {
    string str;
    cin >> str;

    // Case 1: first lower, all next upper
    bool case1 = true;
    for (int i = 0; i < str.length(); i++) {
        if (i == 0) {
            if (not(isUpperCase(str[i]))) {}
            else {case1 = false; break;}
        }
        else {
            if (isUpperCase(str[i])) {}
            else {case1 = false; break;}
        }
    }

    // Case 2: all upper
    bool case2 = true;
    for (char ch : str) {
        if (not (isUpperCase(ch))) {
            case2 = false;
            break;
        }
    }

    if (case1 or case2) {
        for (char ch : str) {
            // cout << ch << "-";
            if (isUpperCase(ch)) cout << (char)(ch-'A'+'a');
            else cout << (char)(ch-'a'+'A');
        }
        cout << endl;
    }
    else {
        cout << str << endl;
    }
}