class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        unsigned int rightMost = (unsigned int)x & (-(unsigned int)x);
        int b1=0,b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightMost){
                b1=b1^nums[i];
            }else{
                b2=b2^nums[i];
            }
        }
        return {b1,b2};
    }
};