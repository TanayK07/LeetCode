class Solution {
public:
    int countHomogenous(string s) {
        long long mod = 1e9 + 7;
        long long sum1=0;
        long long sum = 0;  
        for (int i = 0; i < s.length(); i++) {
            if (i>0 &&  s[i] == s[i -1]) {
                sum++;
            }
            else {
                sum=1;
            }
            sum1+=sum;

        }
        return sum1%mod;
    }
};