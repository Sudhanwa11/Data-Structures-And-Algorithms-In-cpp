#include <iostream>
using namespace std;

bool areAnagram(string &str1, string &str2) {
    int n = str1.size();
    int m = str2.size();
  
    //This variable check will be used to keep track of whether a character in str1 has been found in str2.
    int check; 

    //If the lengths of the two strings are not equal, they can't be anagrams, so the function immediately returns false.
    if (n != m)
        return false;

    for (int i = 0; i < n; i++) {
        check = 0;
        for (int j = 0; j < m; j++) {
            if (str1[i] == str2[j]) {
                check++;
                str2[j] = '.';
                break;
            }
        }
        //if (check == 0) return false;: After the inner loop completes, if check is still 0, 
        //it means no matching character was found in str2 for the current character of str1, so the function returns false.
        if (check == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;  // Read the two input strings

        if (areAnagram(str1, str2))
            cout << "1\n";  // Output 1 if they are anagrams
        else
            cout << "0\n";  // Output 0 if they are not anagrams
    }

    return 0;
}
