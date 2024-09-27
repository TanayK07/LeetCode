class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s1; 
        for (int i = 0; i < emails.size(); i++) {
            string s = emails[i],s2="";
            bool fl = false; 
            int j=0;
            
            while (s[j] != '@') {
                if (s[j] == '+') {
                    fl = true; 
                }
                if (!fl && s[j] != '.') {
                    s2.push_back(s[j]); 
                }
                j++;
            }
            
            while (j < s.size()) {
                s2.push_back(s[j]);
                j++;
            }   
            s1.insert(s2);
        }
        return s1.size();
    }
};
