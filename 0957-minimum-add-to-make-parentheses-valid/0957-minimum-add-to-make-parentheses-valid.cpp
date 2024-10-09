class Solution {
public:
    int minAddToMakeValid(string s) {
        int l1=0,l2=0;
        int n=s.length();
        for(char c: s){
            if(c=='(') l1++;
            else if (l1>0) l1--;
            else l2++;
        }
        return l1+l2;
    }
};