class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int minEle=*min_element(begin(nums1),end(nums1));
       if(minEle%2==1){
        return true;
       }
       for(int i:nums1){
        if(i%2==1){
            return false;
        }
       }
       return true;
        }
};