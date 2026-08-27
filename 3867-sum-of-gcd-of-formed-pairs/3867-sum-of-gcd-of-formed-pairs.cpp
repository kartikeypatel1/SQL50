class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;

        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= maxi) {
                maxi = nums[i];
            }

            prefixGcd.push_back(gcd(maxi, nums[i]));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0;
        int j = nums.size() - 1;

        long long sum = 0;

        while (i < j - i) {
            sum += gcd(prefixGcd[i], prefixGcd[j - i]);
            i++;
        }

        return sum;
    }
};