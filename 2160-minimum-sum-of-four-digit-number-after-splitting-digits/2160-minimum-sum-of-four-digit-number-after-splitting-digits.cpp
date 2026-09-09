class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr(4);
        int i=0;
        while(num>0){
            int rem=num%10;
            arr[i]=rem;
            num/=10;
            i++;
        }
        sort(arr.begin(),arr.end());
        return (arr[0]*10+arr[3])+(arr[1]*10+arr[2]);
       

    }
};