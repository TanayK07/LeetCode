class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        for (int i=n/5;i>0;i/=5)
        c+=i;
        return c;
    }
};