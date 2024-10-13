#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, maxSum = 0;
        int currSize = 0;
        int i = 0;  // Start of the window
        unordered_map<int, int> mp;  // Map to store element frequencies in the current window

        // Iterate through the array
        while (i < nums.size()) {
            // If we find a duplicate, shrink the window from the left until the duplicate is removed
            while (mp[nums[i]] > 0) {
                mp[nums[i - currSize]]--;   // Remove the left-most element from the window
                sum -= nums[i - currSize];  // Subtract it from the sum
                currSize--;                 // Reduce the window size
            }

            // Add the current element to the window
            mp[nums[i]]++;
            sum += nums[i];
            currSize++;

            // If the window size is exactly k, update the maxSum
            if (currSize == k) {
                maxSum = max(maxSum, sum);

                // Slide the window: remove the left-most element to prepare for the next window
                mp[nums[i - k + 1]]--;
                sum -= nums[i - k + 1];
                currSize--;
            }

            i++;  // Move to the next element
        }

        return maxSum;
    }
};
