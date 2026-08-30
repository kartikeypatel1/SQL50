class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;

        int minIndex = -1;
        int maxIndex = -1;

        // Find min, max and their indices
        for (int k = 0; k < n; k++) {
            if (nums[k] < mini) {
                mini = nums[k];
                minIndex = k;
            }

            if (nums[k] > maxi) {
                maxi = nums[k];
                maxIndex = k;
            }
        }

        // Make minIndex the smaller index
        if (minIndex > maxIndex) {
            swap(minIndex, maxIndex);
        }

        // 1. Remove both from the left
        int left = maxIndex + 1;

        // 2. Remove both from the right
        int right = n - minIndex;

        // 3. Remove min from left and max from right
        int both = (minIndex + 1) + (n - maxIndex);

        return min({left, right, both});
    }
};