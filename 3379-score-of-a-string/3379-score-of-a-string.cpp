class Solution {
public:
    int scoreOfString(string s) {
        int s1=0;
        for(int i=0;i<s.length()-1;i++){
            s1+=abs(s[i]-s[i+1]);
        }
        return s1;
    }
};