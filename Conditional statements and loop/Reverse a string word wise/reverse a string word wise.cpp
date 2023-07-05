#include <iostream>
using namespace std;

string reverseStringWordWise(string input) {
    string ans;
    string str;
    for (int i=0; i<input.length(); i++) {
        if (input[i] != ' ') {
            str += input[i];
        }
        else {
            ans = str + " " + ans;
            str = "";
        }
    }
    ans = str + " " + ans;
    return ans;
}

int main() {
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
