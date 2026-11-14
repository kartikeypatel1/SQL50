
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            int s = 0;
            for(int j = i; j < nums.size(); j++) {
                s += nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && s > 0) {
                    sum = min(s, sum);
                }
            }
        }
        if(sum == INT_MAX) {
            return -1;
        }
        return sum;
    }
};
