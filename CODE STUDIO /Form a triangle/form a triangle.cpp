#include<bits/stdc++.h>

bool possibletomakeTriangle (vector <int> & arr) {
   sort (arr.begin(), arr.end());
   for (int i=0; i<arr.size() - 2; i++) {
        if (arr[i] + arr[i+1] > arr[i+2]) {
           return true;
        }
   }
   return false;
}
