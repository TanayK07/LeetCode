class Solution {
public:
    string addBinary(string a, string b) {
  int n = max(a.size(), b.size());
        string sum = "";
        bool carry = 0;

        for (int i = 0; i < n; i++) {
            bool ai = i < a.size() ? a[a.size() - 1 - i] - '0' : 0;
            bool bi = i < b.size() ? b[b.size() - 1 - i] - '0' : 0;
            bool val = ai ^ bi ^ carry;
            carry = (ai & bi) | (bi & carry) | (carry & ai);
            sum = to_string(val) + sum;
        }

        if (carry) {
            sum = '1' + sum;
        }

        return sum;
    }

};