class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            ans ^= nums[i];
        }

        if (ans != 0) {
            return n;
        }

        ans = 0;

        for (int i = 0; i < n; i++) {
            ans ^= nums[i];

            if (ans != 0) {
                return n - 1;
            }
        }

        return 0;
    }
};