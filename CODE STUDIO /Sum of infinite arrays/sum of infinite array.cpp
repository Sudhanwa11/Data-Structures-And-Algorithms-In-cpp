int mod = 1e9+7;
long long sum_upto_i(vector<long long> &prefix, long long i, long long n){
    long long repeat = (i/n) % mod;
    long long sum = (repeat * prefix[n]) % mod;
    sum = (sum + (prefix[(i%n)])) % mod;
    return sum;
}

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<long long> prefix_sum(n+1, 0);
    vector<int> result;
    for(int i=1; i<=n; i++){
        prefix_sum[i] = ((arr[i-1] + prefix_sum[i-1])%mod);
    }
    for(int j=0; j<q; j++){
        long long l = queries[j][0];
        long long r = queries[j][1];

        long long left_sum = sum_upto_i(prefix_sum, l-1, n);

        long long right_sum = sum_upto_i(prefix_sum, r, n);
        
        result.push_back((right_sum-left_sum+mod) % mod);
    }
    return result;
}
