#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    string ans;
    int n = input.size();
    for (int i=0; i<n; i++) {
        if (input[i] != c) {
            ans += input[i];
        }
    }
    return ans;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
