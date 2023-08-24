#include <bits/stdc++.h> 
string encode(string &message) {
    
    int i=0, j = i+1;
    string encoded = "";

    while (i < message.size()) {
        if (message[i] == message[j]) {
            j++;
        }
        else {
            int len = j-i;
            encoded += message[i] + to_string(len);
            i = j;
        }
    }
    return encoded;
}
