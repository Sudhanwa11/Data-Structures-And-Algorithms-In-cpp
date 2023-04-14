#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
       if(arr[i]+arr[j] == s){
          vector<int> temp;
          if(arr[i]>=arr[j]){
             temp.push_back(arr[j]);
             temp.push_back(arr[i]);
             ans.push_back(temp);
            }
         else{
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
         }
      }
   }
}
sort(ans.begin(), ans.end());
return ans;
}
