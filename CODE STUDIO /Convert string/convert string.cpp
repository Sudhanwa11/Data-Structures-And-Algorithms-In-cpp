#include <bits/stdc++.h> 
string convertString(string str) {
  str[0] = toupper(str[0]);
  int i = 0, j = 0;
  while (j <= str.length()) {
        if (str[j] != ' ') {
          j++;
        }
        else {
          i = j+1;
          str[i] = toupper(str[i]);
          j++;
      }
  }
  return str;
}
