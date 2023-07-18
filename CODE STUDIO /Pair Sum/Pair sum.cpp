#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   sort(arr.begin(),arr.end());
   
   vector<vector<int>> ans;
   int n = arr.size();
   for(int i=0; i<n; i++) {
      for(int j=i+1; j<n; j++) {
         if(arr[i] + arr[j] == s){ 
            vector<int> v1;
            v1.push_back(arr[i]);
            v1.push_back(arr[j]);
            ans.push_back(v1);
         }
      }

   }
   return ans;
}
