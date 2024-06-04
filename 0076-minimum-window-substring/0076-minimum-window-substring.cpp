class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0, c = 0, n = s.length(), m = t.length();
        int minlength = INT_MAX, s1 = -1;
        vector<int> freq(256, 0);
       for (char i : t)
            freq[i]++;
        while (r < n) {
            if (freq[s[r]] > 0)
                c++;
            freq[s[r]]--;
            while (c == m) {

                if (r - l + 1 < minlength) {
                    minlength = r - l + 1;
                    s1 = l;
                }
                freq[s[l]]++;
                if (freq[s[l]] > 0)
                    c--;
                l++;
            }

            r++;
        }
        return s1 == -1 ? "" : s.substr(s1, minlength);
    }
};