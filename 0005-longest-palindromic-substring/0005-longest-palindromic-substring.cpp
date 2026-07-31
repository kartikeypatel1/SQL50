class Solution {
public:
int expandFromCenter(string& s,int left,int right){
    while(left>=0&&right<s.size()&&s[left]==s[right]){
        left--;
        right++;
    }
    return right-left-1;
}
    string longestPalindrome(string s) {
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            int oddLen=expandFromCenter(s,i,i);
            int evenLen=expandFromCenter(s,i,i+1);
            int maxLen=max(evenLen,oddLen);
            if(maxLen>end-start){
                start=i-(maxLen-1)/2;
                end=i+maxLen/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};