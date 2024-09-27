class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.length();
        // vector<int> v1;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '-') {
                s.erase(i, 1);
            }
            if (s[i]>='a' && s[i]<='z') s[i]=s[i]-32;

        }
        cout <<"erased"<<s<<endl;
                int n1 = s.length();
        // for 

        for (int i = n1 - k; i > 0; i-=k) {
                auto it = s.insert(s.begin() + i, '-');
                // v1.push_back(i);
        }
        // for(int i=0;i<v1.size();i++){
        //     auto it=s.insert(s.begin()+v1[i],'-');
        // }

        // transform(s.begin(), s.end(), s.begin(), ::toupper); 

        return s;
    }
};