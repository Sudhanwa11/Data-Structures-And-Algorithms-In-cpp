class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long count = 0;
        vector<int> countMap(1024, 0); // Stores the count of each bitmask
        countMap[0] = 1; // Empty string has a count of 1

        int bitmask = 0;
        for (char c : word) {
            bitmask ^= 1 << (c - 'a');
            count += countMap[bitmask]; // Add the count of substrings ending at the current index
            for (int i = 0; i < 10; i++) {
                count += countMap[bitmask ^ (1 << i)]; // Add the count of substrings with one character flipped
            }
            countMap[bitmask]++;
        }

        return count;
    }
};
