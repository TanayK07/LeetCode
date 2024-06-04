class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m1;
        int f=0,c=0,co=0;
        for (char ch : s) m1[ch]++;

        for (const auto& it : m1) {
                             
                c+=it.second;
                if(it.second%2!=0) 
                {
                    co++;
                    f=1;

                }
                

          }
          return c-co+f;
        
    }
};