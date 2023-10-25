class Solution {
public:
    int kthGrammar(int n, int k) {
      //  bool f=1;
        if (n==1 || n==0 ) return 0;
          int pre = kthGrammar(n - 1, (k + 1) / 2);
                  return abs((k & 1) + pre - 1);

    }

        
};