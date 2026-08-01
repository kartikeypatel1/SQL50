class Solution {
public:
int result=INT_MAX;
int n;
void backtrack(int idx,vector<int>& cookies, vector<int> &children,int k){
    if(idx>=n){
        int unfairness=*max_element(begin(children),end(children));
        result=min(result,unfairness);
        return ;
    }
    int cookie=cookies[idx];
    for(int j=0;j<k;j++){
        children[j]+=cookie;
        backtrack(idx+1,cookies,children,k);
        children[j]-=cookie;
    }
}
    int distributeCookies(vector<int>& cookies, int k) {
        n=cookies.size();
        vector<int> children(k,0);
        backtrack(0,cookies,children,k);
        return result;
    }
};