#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> res;
    unordered_map<int,int> um;
    for (int i=0;i<arr.size();i++) {
        um[arr[i]]++;
    }
    for (auto x:um) {
        if (x.second > (arr.size()/3)) {
            res.push_back(x.first);
        }
    }
    return res;
}
