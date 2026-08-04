class Solution {
public:
void solve(int n,string& curr,vector<string> &res){
    if(n==0){
        res.push_back(curr);
        return;
    }
    curr.push_back('1');
    solve(n-1,curr,res);
    curr.pop_back();
    if(curr.size()==0||curr.back()=='1'){
        curr.push_back('0');
        solve(n-1,curr,res);
        curr.pop_back();
    }
}
    vector<string> validStrings(int n) {
        vector<string> res;
        string s="";
        solve(n,s,res);
        return res;
    }
};