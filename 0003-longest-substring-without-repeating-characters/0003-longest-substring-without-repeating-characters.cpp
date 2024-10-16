class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s1;
        int c = 0;
        int l = 0;

        for (int r = 0; r < s.length(); r++) {
            while (s1.find(s[r]) != s1.end()) {
                s1.erase(s[l]);
                l++;
            }
            s1.insert(s[r]);
            c = max(c, r - l + 1);
        }
        return c;
    }
};
