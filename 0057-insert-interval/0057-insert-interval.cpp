class Solution {
public:
    void mergeInterval(vector<vector<int>>& intervals,
                       vector<vector<int>>& result) {
        if (intervals.empty()) return;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (end >= intervals[i][0]) {
                end = max(end, intervals[i][1]);
            } else {
                result.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        result.push_back({start, end});
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> res, result;
        bool inserted = false;

        for (int i = 0; i < intervals.size(); i++) {
            if (!inserted && newInterval[0] < intervals[i][0]) {
                res.push_back(newInterval);
                inserted = true;
            }

            res.push_back(intervals[i]);
        }

        if (!inserted) {
            res.push_back(newInterval);
        }

        mergeInterval(res, result);

        return result;
    }
};