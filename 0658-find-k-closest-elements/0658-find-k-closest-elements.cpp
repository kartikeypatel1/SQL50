class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
            int val=abs(x-arr[i]);
            pq.push({val,arr[i]});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> result;
        while(!pq.empty()){
            auto [key,val]=pq.top();
            result.push_back(val);
            pq.pop();
        }
     sort(result.begin(),result.end());
     return result;
    }
};