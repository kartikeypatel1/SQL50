class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int endTime=intervals[0][1];
        vector<vector<int>> result;
        for(int i=1;i<intervals.size();i++){
            if(endTime>=intervals[i][0]){
                endTime=max(intervals[i][1],endTime);
            }else{
                result.push_back({start,endTime});
                start=intervals[i][0];
                endTime=intervals[i][1];
            }
        }
        result.push_back({start,endTime});
        return result;
    }
};