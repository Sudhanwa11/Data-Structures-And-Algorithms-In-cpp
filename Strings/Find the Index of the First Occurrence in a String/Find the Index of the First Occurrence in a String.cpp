class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_len = haystack.length();
        int n_len = needle.length();

        if (n_len == 0) {
            return 0;
        }

        // Iterate up to (haystack.length() - needle.length() + 1)
        for (int i = 0; i <= h_len - n_len; ++i) {
            int j;
            // Compare characters directly instead of using substr
            for (j = 0; j < n_len; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            
            // If the loop completed, it means the substring matches
            if (j == n_len) {
                return i;
            }
        }

        return -1;
    }
};
