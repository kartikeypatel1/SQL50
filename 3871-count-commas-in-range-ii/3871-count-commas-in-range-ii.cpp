class Solution {
public:
    long long countCommas(long long n) {
       long long curr=1000;
       long long result=0;
       while(curr<=n){
        result+=n-curr+1;
        curr*=1000;
       }
       return result;
    }
};