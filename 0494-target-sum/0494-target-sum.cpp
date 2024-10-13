class Solution {
public:
    int dp(vector<int>& nums, int target, int index, int curr_sum) {
        // Base Cases
        if (index < 0 && curr_sum == target) {
            return 1;
        }
        if (index < 0) {
            return 0;
        }

        // Recursive decisions
        int positive = dp(nums, target, index - 1, curr_sum + nums[index]);
        int negative = dp(nums, target, index - 1, curr_sum - nums[index]);

        return positive + negative;
    }

    int findTargetSumWays(vector<int>& nums, int S) {
        int index = nums.size() - 1;
        int curr_sum = 0;
        return dp(nums, S, index, curr_sum);
    }
};
