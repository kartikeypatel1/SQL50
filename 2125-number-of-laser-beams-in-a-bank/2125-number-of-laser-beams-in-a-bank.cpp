class Solution {
public:
int countTheOne(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') cnt++;
    }
    return cnt;
}
    int numberOfBeams(vector<string>& bank) {
        vector<int> temp;
        int ans=0;
        for(int i=0;i<bank.size();i++){
            if(countTheOne(bank[i])!=0){
                temp.push_back(countTheOne(bank[i]));
            }
        }
        for(int i=1;i<temp.size();i++){
            ans+=(temp[i]*temp[i-1]);
        }
        return ans;
    }
};