class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> mini(n);
        int minH=INT_MAX;
        for(int i=n-1;i>=0;i--){
            minH=min(minH,nums[i]);
            mini[i]=minH;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            if((maxi-mini[i])<=k){
                return i;
            }
        }
        return -1;
    }
};