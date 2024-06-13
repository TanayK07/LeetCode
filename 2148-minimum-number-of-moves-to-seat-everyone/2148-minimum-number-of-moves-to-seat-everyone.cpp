class Solution {
public:
    int minMovesToSeat(vector<int>& s1, vector<int>& s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int c=0;
        for(int i=0;i<s1.size();i++) c+=abs(s1[i]-s2[i]);
        return c;

        
    }
};