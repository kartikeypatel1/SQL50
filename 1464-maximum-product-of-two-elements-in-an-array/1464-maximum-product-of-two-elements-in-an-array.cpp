class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int f1= nums[nums.size()-1]-1;
        int f2=nums[nums.size()-2]-1;
        return f1*f2;
    }
};