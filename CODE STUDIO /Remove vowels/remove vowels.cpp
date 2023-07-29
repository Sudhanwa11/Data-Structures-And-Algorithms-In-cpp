#include <bits/stdc++.h> 
string removeVowels(string inputString) {
    string ans = "";
    for (int i=0; i<inputString.size(); i++) {
        char x = inputString[i];

        if (x =='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
            continue;
        }
        else {
            ans.push_back(x);
        }
    }
    return ans;
}
