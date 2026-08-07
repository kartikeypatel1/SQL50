class Solution {
public:
    typedef pair<int, int> pp;
    class cmp {
    public:
        bool operator()(pp a, pp b) {
            if (a.first == b.first)
                return a.second < b.second; // Larger value first
            return a.first > b.first;       // Smaller frequency first
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        priority_queue<pp, vector<pp>, cmp> pq;

        for (auto &it : mp) {
            pq.push({it.second, it.first}); // {frequency, value}
        }

        vector<int> result;

        while (!pq.empty()) {
            auto [freq, val] = pq.top();
            pq.pop();

            while (freq--) {
                result.push_back(val);
            }
        }

        return result;
    }
};