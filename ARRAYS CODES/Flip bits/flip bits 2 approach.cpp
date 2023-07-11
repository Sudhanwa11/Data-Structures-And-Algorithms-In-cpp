#include <bits/stdc++.h> 

int maxsum (int *arr, int n) {
    int currentsum = arr[0];
    int maxsum = arr[0];
    for (int i=1; i<n; i++) {
        currentsum = max(arr[i], currentsum+arr[i]);
        maxsum = max (maxsum, currentsum);
    }
    return max(maxsum, 0);
}

int flipBits(int* arr, int n) 
{
    int count_one = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            arr[i] = 1;
        }
        else {
            arr[i] = -1;
            count_one++;
        }
    }

    return count_one + maxsum(arr, n);
}
