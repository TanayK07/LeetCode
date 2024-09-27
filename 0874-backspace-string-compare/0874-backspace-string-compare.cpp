class Solution {
public:
    
    string helper(string s){
         int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#') 
         {   c--;
            c=max(0,c);
         }
            else {
                s[c++]=s[i];
            }
        }
        return s.substr(0,c);
    }

    bool backspaceCompare(string s, string t) {
       
        return helper(s)==helper(t);
    }
};



















