#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, maxSum = 0;
        int left = 0;  // Start of the window
        unordered_map<int, int> mp;  // Map to store element frequencies in the current window
        
        // Iterate through the array
        for (int right = 0; right < nums.size(); right++) {
            mp[nums[right]]++;     // Add the current element to the window
            sum += nums[right];    // Add its value to the sum

            // If the window size exceeds k, shrink the window from the left
            if (right - left + 1 > k) {
                sum -= nums[left];       // Remove the element that's sliding out of the window
                mp[nums[left]]--;        // Decrease the frequency
                if (mp[nums[left]] == 0) // Remove from the map if its frequency is zero
                    mp.erase(nums[left]);
                left++;                  // Move the left pointer to the right
            }

            // If the window size is exactly k and all elements are distinct
            if (right - left + 1 == k && mp.size() == k) {
                maxSum = max(maxSum, sum);  // Update the maximum sum
            }
        }

        return maxSum;
    }
};
