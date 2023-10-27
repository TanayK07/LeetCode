class Solution {
public:
    string longestPalindrome(string s) {
        
     string ans;
        int n=s.size(),max_len=0;
        if(n==0)return "";
        if(n==1)return s;
        for(int i=0;i<n;i++){
            if(n-i<=max_len/2)break;
            int k=i,j=i;
            while(k<n && s[k+1]==s[k])k++;
            i=k;
            while(j>=0 && k<n && s[k]==s[j])k++,j--;
            if(max_len<k-j-1){
                max_len=k-j-1;
                ans=s.substr(j+1,max_len);
            }
        }
        return ans;
    }};