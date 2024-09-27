class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.length();
        string s2="", s4="";
        int c=0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') {
                continue;
            }
            if (s[i] >= 'a' && s[i] <= 'z') s2 += s[i] - 32;
            else s2 += s[i];
        }

        int n1 = s2.length();
        int rem = n1 % k;
        
        if (rem > 0) {
            s4 += s2.substr(0, rem);
        }
        // for (int i=n1;i

        for (int i = rem; i < n1; i += k) {
            if (!s4.empty()) {
                s4 += "-";
            }
            s4 += s2.substr(i, k);
        }

        return s4;
    }
};
