class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.length();
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '-') {
                s.erase(i, 1);
            }
            if (s[i]>='a' && s[i]<='z') s[i]=s[i]-32;

        }
        cout <<"erased"<<s<<endl;
                int n1 = s.length();

        for (int i = n1 - k; i > 0; i-=k) {
            cout <<i<<endl;
                auto it = s.insert(s.begin() + i, '-');
        }
        // transform(s.begin(), s.end(), s.begin(), ::toupper); 

        return s;
    }
};