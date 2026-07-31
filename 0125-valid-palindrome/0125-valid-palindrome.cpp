class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";

        for (char c : s) {
            if (isalnum(c)) {      // Include letters and digits
                result += tolower(c);
            }
        }

        string rev = result;
        reverse(rev.begin(), rev.end());

        return result == rev;
    }
};