class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int checkIndex=abs(nums[i])-1;
            
            if(nums[checkIndex]<0) result.push_back(abs(nums[i]));
            nums[checkIndex]=nums[checkIndex]*-1;
        }
        return result;
    }
};