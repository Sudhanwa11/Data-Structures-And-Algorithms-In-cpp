#include <bits/stdc++.h> 
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    int ans = INT_MIN;
    
    vector<vector<int>> suf (n, vector<int> (m+1));
    for (int i = 0; i < n; ++i) {
        for (int j = m-1; j>=0; --j) {
            suf[i][j] = suf[i][j+1] + arr[i][j];
        }
    }

    for (int i = m-1; i >= 0; --i) {
        for (int j = m; j > i; --j) {
            int sum = 0;
            for (int k = 0; k < n; ++k) {
                sum += (suf[k][i] - suf[k][j]);
                ans = max (ans, sum);
                if (sum < 0) {
                    sum = 0;
                }
            }
        }
    }
    return ans;
}
