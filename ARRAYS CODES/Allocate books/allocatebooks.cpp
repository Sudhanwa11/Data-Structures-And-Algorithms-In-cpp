#include <bits/stdc++.h> 
bool isPossible (vector<int> arr, int n, int m, int mid) {
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i<n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        }
        else {
            studentcount++;
            if (studentcount > m || arr[i] > mid) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    int start = 0;
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while (start<=end) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
