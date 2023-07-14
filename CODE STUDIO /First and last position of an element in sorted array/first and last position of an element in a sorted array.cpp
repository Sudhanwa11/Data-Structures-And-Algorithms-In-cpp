#include <bits/stdc++.h>
int lastocc(vector<int> &arr, int n, int k){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k > arr[mid]){
            s=mid+1; 
        }
        else if(k < arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int firstocc(vector<int> &arr, int n, int k){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k > arr[mid]){
            s=mid+1;
        }
        else if(k < arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
vector<int> searchRange(vector<int> &arr, int x) {
	vector<int>ans(2);
    int n = arr.size();
    ans[0] = firstocc(arr,n,x);
    ans[1] = lastocc(arr,n,x);
    return ans;
}
