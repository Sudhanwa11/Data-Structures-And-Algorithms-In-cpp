class Solution {
  public:
    vector<int> findIndex(int a[], int n, int key) {
        vector<int> outputindex = {-1, -1};
        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                if (outputindex[0] == -1) {
                    outputindex[0] = i;  // Set start index
                }
                outputindex[1] = i;  // Update end index
            }
        }
        return outputindex;
    }
};
