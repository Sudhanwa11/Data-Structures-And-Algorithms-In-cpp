#include <bits/stdc++.h> 
int flipBits(int* arr, int n) {
    int zeros = 0;
    int ones = 0;
    int contiueZeros = 0;
    for(int i=0;i<n;i++) {
        if(arr[i]==0) {
            zeros++;
        }
        else {
            zeros--;
            ones++;
        }
        contiueZeros = max(contiueZeros,zeros);
        if(zeros<0)
        zeros=0;
    }
    return ones + contiueZeros;
}
