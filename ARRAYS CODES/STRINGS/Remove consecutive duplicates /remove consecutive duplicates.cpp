#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input) {
    string ans;
    for (int i=0; i<input.length(); i++) {
        if (input[i] != input[i+1]) {
            ans = ans + input[i];
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}
