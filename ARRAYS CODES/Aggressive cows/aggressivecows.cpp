bool isPossible(vector<int> &stalls, int k, int mid) {
    int cowcount = 1;
    int lastpostion = stalls[0];
    for (int i=0; i<stalls.size(); i++) {
        if (stalls[i] - lastpostion >= mid) {
            cowcount++;
            if (cowcount == k) {
                return true;
            }
            lastpostion = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k) {
    //to sort array first
    sort(stalls.begin(), stalls.end());
    //to apply binary search
    int start = 0;
    int maximum = -1;
    for (int i=0; i<stalls.size(); i++) {
        maximum = max(maximum, stalls[i]);
    }
    int end = maximum;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end) {
        if (isPossible(stalls, k, mid)) {
            ans = mid;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
