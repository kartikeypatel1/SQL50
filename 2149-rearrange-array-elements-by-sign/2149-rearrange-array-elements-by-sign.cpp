class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        vector<int>positive,negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        return result;
    }
};