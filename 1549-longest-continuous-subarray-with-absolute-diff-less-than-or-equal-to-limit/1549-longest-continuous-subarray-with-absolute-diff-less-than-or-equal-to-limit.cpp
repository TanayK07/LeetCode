class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size(), i = 0, j = 0, ans = 0;
        map<int, int> mp;

        while (j < n) {
            mp[nums[j]]++;

            while (!mp.empty() && (mp.rbegin()->first - mp.begin()->first) > limit) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};