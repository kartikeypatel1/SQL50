class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=*max_element(begin(nums),end(nums));
        int mini=*min_element(begin(nums),end(nums));
        vector<int> temp(maxi-mini+1);
        for(int i:nums){
            temp[i-mini]=i;
        }
        vector<int> result;
        for(int i=0;i<maxi-mini;i++){
            if(!temp[i]){
                result.push_back(i+mini);
            }
        }
        return result;
    }
};