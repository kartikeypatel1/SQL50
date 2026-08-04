class Solution {
public:
void backtrack(vector<int>& nums,int n,int idx,vector<int>& temp,vector<vector<int>> &result){
    if(idx==n){
        result.push_back(temp);
        return;
    }
    backtrack(nums,n,idx+1,temp,result);// agr hm value ko choose nhi kr rhe hai tb hm ek index bdha de rhe hai aur fucntion call lga de rhe hai 
    temp.push_back(nums[idx]);// agr hmne value choose krli to hm use temp me daal rhe hai then uske baad next value ke liye function call lga rhe hai 
    backtrack(nums,n,idx+1,temp,result);
    temp.pop_back();// jb value add kr chuke hia use krli then uske baad hm use remove kr de rhe hia
}
    vector<vector<int>> subsets(vector<int>& nums) {
        // int n=nums.size();
        // vector<vector<int>> result;
        // vector<int> temp;
        // backtrack(nums,n,0,temp,result);
        // return result;


      int n=nums.size();
      int subset=1<<n;
     vector<vector<int>> ans;
      for(int num=0;num<subset;num++){
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                temp.push_back(nums[i]);
            }
        }
        ans.push_back(temp);
      }  
      return ans;
   }
};