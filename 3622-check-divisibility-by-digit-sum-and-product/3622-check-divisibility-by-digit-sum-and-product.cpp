class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0;
        long long mul=1;
        int temp=n;
        while(temp>0){
            int rem=temp%10;
            sum+=rem;
            mul*=rem;
            temp/=10;
        }
        return n%(sum+mul)==0?true:false;
    }
};