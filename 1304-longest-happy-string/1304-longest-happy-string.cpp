class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        vector<pair<int, char>> nums = {{a, 'a'}, {b, 'b'}, {c, 'c'}};
        string result = "";

        while (true) {
            sort(nums.begin(), nums.end(), greater<>());

            bool added = false;
            for (auto& p : nums) {
                int count = p.first;
                char ch = p.second;

                if (count > 0 &&
                    (result.size() < 2 || result[result.size() - 1] != ch ||
                     result[result.size() - 2] != ch)) {
                    result += ch;
                    p.first--;
                    added = true;
                    break;
                }
            }

            if (!added)
                break;
        }

        return result;
    }
};
