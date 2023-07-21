#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN; 
    int second = INT_MIN;

    for (int i=0; i<n; i++) {
        if (arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        return -1;
    }
    else {
        return second;
    } 
}
