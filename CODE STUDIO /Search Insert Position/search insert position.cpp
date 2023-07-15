int searchInsert(vector<int>& arr, int m) {
	  int ans;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] == m){
            ans = i;
            break;
        }
        else if(m > arr[i] && m < arr[i+1]){
            ans = i+1;
            break;
        }
        else if(m < arr[0]){
            ans = 0;
            break;
        }
        else if(m > arr[n-1]){
            ans = n;
            break;
        }
    }
    return ans;
}
