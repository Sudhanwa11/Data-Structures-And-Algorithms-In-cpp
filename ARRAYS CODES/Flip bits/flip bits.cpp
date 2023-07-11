#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    int ones = 0;
    int zeroes = 0;
    int zerocount = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] != 0) {
            ones++;
            zeroes--;
        }
        else {
            zeroes++;
        }
        zerocount = max(zerocount, zeroes);
        if (zeroes < 0) {
            zeroes = 0;
        }
    }
    return ones + zerocount;
}
