class Solution {
public:
    static bool check(int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return b > a;
        }
        return countA < countB;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), check);
        return arr;
    }
};
