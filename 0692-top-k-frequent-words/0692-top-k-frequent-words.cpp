
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for (string word : words) {
            mp[word]++;
        }

        vector<string> result;

        for (auto& it : mp) {
            result.push_back(it.first);
        }

        sort(result.begin(), result.end(), [&](string a, string b) {
            if (mp[a] == mp[b]) {
                return a < b;
            }
            return mp[a] > mp[b];
        });

        result.resize(k);
        return result;
    }
};
