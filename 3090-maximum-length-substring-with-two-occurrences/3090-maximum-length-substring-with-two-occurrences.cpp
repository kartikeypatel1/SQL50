class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0, j = 0;
        int count = 0;
        unordered_map<char, int> mp;

        while (j < s.size()) {
            mp[s[j]]++;

            while (mp[s[j]] > 2) {
                mp[s[i]]--;
                i++;
            }

            count = max(count, j - i + 1);
            j++;
        }

        return count;
    }
};