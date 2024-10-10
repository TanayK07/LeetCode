class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> in(n);
        
        for (int i = 0; i < n; ++i) {
            in[i] = i;
        }

        sort(in.begin(), in.end(), [&](int a, int b) {
            return nums[a] < nums[b] || (nums[a] == nums[b] && a < b);
        });

        int maxi = 0,mini=in[0];

        for (int i = 1; i < n; ++i) {
            maxi = max(maxi, in[i] - mini);
            mini = min(mini, in[i]);
        }

        return maxi;
    }
};
