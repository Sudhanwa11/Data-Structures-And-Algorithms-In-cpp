vector<int> binaryQueries(int n, vector<int> &a, int q, vector<vector<int>> &queries) {
    // Write your code here.
    vector<int> result;

    for (int i = 0; i < q; i++) {
        int l = queries[i][0];
        int r = queries[i][1];
        int x = queries[i][2];

        // Update elements in the range [l, r]
        for (int j = l; j <= r; j++) {
            a[j] = a[j] ^ x;
        }

        // Calculate the bitwise OR of elements in the range [l, r]
        int bitwiseOR = a[l];
        for (int j = l + 1; j <= r; j++) {
            bitwiseOR = bitwiseOR | a[j];
        }

        result.push_back(bitwiseOR);
    }

    return result;
}
