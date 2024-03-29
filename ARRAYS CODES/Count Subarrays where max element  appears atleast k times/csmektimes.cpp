class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = 0, i = 0, j = 0, n = nums.size();

        unordered_map<int, int> mp;
        long long ans = 0;

        for (auto els : nums) {
            maxi = max(maxi, els);
        }

        while (j < n) {
            mp[nums[j]]++;
            while (mp[maxi] >= k) {
                ans += (n-j);
                --mp[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};
