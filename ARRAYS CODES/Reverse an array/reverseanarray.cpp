#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m) {
	int n = arr.size();
	int num =(n-(m+1))/2;
	int j = 0;
	for(int i=m+1; i<(m+1+num); i++){
		int temp;
		temp = arr[i];
		arr[i] = arr[n-1-j];
		arr[n-1-j] = temp;
		j++;
		}
}
