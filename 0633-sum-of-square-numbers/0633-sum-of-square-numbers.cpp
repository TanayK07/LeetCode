class Solution {
public:
    bool judgeSquareSum(int n) {
           int count1mod4 = 0, count3mod4 = 0;
           if(n==0) return 1;
    
        for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i % 4 == 1)
                ++count1mod4;
            if (i % 4 == 3)
                ++count3mod4;
            if (i != n / i) {
                if ((n / i) % 4 == 1)
                    ++count1mod4;
                if ((n / i) % 4 == 3)
                    ++count3mod4;
            }
        }
    }
    
    return 4 * (count1mod4 - count3mod4);


    }
};