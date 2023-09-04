#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    unordered_map <int, int> reMap;
    reMap[0] = 1;
    long sum = 0;
    int count = 0;
    
    for (int i=0; i<arr.size(); i++) {
        sum += arr[i];
        int rem = (sum % k + k) % k;
        if (reMap.find(rem) != reMap.end()) {
            count += reMap[rem];
            reMap[rem] += 1; 
        }
        else {
            reMap[rem] = 1;
        }
    }
    return count;
}
