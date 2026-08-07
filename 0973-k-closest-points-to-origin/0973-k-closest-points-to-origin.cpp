class Solution {
public:
typedef pair<int,pair<int,int>> pp;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pp> pq;
        for(int i=0;i<points.size();i++){
            int val=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({val,{points[i][0],points[i][1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> result;
        while(!pq.empty()){
            auto[val,pair]=pq.top();
            result.push_back({pair.first,pair.second});
            pq.pop();
        }
        return result;
    }
};