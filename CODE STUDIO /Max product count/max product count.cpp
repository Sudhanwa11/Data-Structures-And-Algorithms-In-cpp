#include <bits/stdc++.h> 
vector<long long> maxProductCount(vector<int> &arr, int n) {
    if(n<4){
        return {0};
    }
    unordered_map<long long,long long> mpp;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                continue;
            }
            mpp[(long long)arr[i] * arr[j]]++;
        }
    }
    long long max_cunt = 0;
    vector<long long> nums;
    for(auto it : mpp){
        max_cunt = max(max_cunt,it.second);
    }
    if(max_cunt==2){
      return {0};
    }
    for(auto it : mpp){
        if(it.second==max_cunt){
            nums.push_back(it.first);
        }
    }
    long long mini = *min_element(nums.begin(),nums.end());
    return {mini, max_cunt*(max_cunt/2-1)/4};
}
