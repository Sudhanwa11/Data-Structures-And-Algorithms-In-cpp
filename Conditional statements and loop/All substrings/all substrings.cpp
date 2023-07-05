#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) { 
    for (int i=0; i<input.length(); i++) {
        int j = 1;
        while (j <= (input.length() - i)) {
            cout << input.substr(i, j++) << endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
