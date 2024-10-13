#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Memoization table: dp[index][prevIndex] -> result
    vector<vector<int>> dp;

    // Helper function for recursion
    int helper(vector<int>& nums, int index, int prevIndex) {
        // Base case: If we've processed all elements
        if (index == nums.size()) {
            return 0;
        }

        // Check if this state is already computed
        if (dp[index][prevIndex + 1] != -1) {
            return dp[index][prevIndex + 1];
        }

        // Don't take the current element
        int donttake = helper(nums, index + 1, prevIndex);

        // Take the current element if it's greater than the previous element
        int take = 0;
        if (prevIndex == -1 || nums[index] > nums[prevIndex]) {
            take = 1 + helper(nums, index + 1, index);
        }

        // Store the result in dp
        dp[index][prevIndex + 1] = max(donttake, take);

        return dp[index][prevIndex + 1];
    }

    // Main function to compute the length of LIS
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // Initialize dp array with -1 (uncomputed states)
        dp = vector<vector<int>>(n, vector<int>(n + 1, -1));

        // Start with index 0 and previous element being "none" (-1 means no previous)
        return helper(nums, 0, -1);
    }
};
