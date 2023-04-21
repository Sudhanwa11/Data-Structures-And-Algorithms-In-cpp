#include <iostream>
using namespace std;
char getmaxOcc (string s) {
    int arr[26] = {0};
    //create an array of count of characters
    for (int i=0; i<s.length(); i++) {
        char ch = s[i];
        int number = 0;
        //lowercase
        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        }
        //uppercase
        else {
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find maximum occurence number
    int maxi = -1, ans = -1;
    for (int i=0; i<26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main() {
    string s;
    cout<< "enter the value of string"<<endl;
    cin>>s;
    cout<< getmaxOcc(s) <<endl;
    return 0;
}
