#include <bits/stdc++.h> 

bool checkPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string str="";
    for(int i=0;i<=s.size()-1;i++){
        if(s.at(i)>='a'&&s.at(i)<='z'||s.at(i)>='0'&&s.at(i)<='9'){
            str+=s.at(i);
        }
    }
    string rev=str;
    int start=0;
    int end=rev.size()-1;
    while(start<end){
        swap(rev.at(start++),rev.at(end--));
    }
    return rev==str;
}
