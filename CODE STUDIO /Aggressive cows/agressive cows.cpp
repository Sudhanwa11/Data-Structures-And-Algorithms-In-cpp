bool isPossible(vector<int>&stalls,int n,int k,int mid){
    int Cowcount = 1;
    int Lastposition = stalls[0];
    for(int i=0; i<n; i++){
        if(stalls[i] - Lastposition >= mid){
            Cowcount++;
            if(Cowcount == k){
                return true;
            }
            Lastposition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int s = 0;
    int maxi = stalls[0];
     //for find maximum number, there are 1 more method but this one for beginners
    for(int i=0; i<n; i++){
        if(stalls[i] > maxi){
            maxi = stalls[i];
        }
    }
    int e = maxi;//last max value
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isPossible(stalls,n,k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
