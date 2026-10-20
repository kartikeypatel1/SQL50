
class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int>& temp, int k, int n,
                   int start) {
        if (temp.size() == k) {
            if (n == 0) {
                result.push_back(temp);
            }
            return;
        }
        for(int i=start;i<=9;i++) {
            if(n-i>=0) {
                temp.push_back(i);
                backtrack(result,temp,k,n-i,i+1);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(result, temp, k, n, 1);
        return result;
    }
};
