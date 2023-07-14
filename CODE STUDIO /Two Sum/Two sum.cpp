#include <algorithm>
#include <bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n) { 
  vector<pair<int, int>>a;
	sort(arr.begin(), arr.end());
	int i = 0;
	int j = n-1;
	while (i<j) {
		if ((arr[i]+arr[j]) == target) {
			a.push_back({arr[i], arr[j]});
			i++;
			j--;
		}
		else if ((arr[i]+arr[j]) < target) {
			i++;
		}
		else {
			j--;
		}
	}
	if (a.empty()) {
        a.push_back({-1, -1});
    }
    return a;
}
