#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord (string input) {
    string s, ans;
    int n = input.size();
    for (int i=0; i<n; i++) {
        if (input[i] == ' ' || i == n-1) {
            if (i == n-1)
            s.push_back(input[n-1]);
            for (int j=s.size()-1; j>=0; j--) {
                ans.push_back(s[j]);   
            }
            i++;
            ans.push_back(' ');
            s = "";
        }
        s.push_back(input[i]);
    }
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
}
