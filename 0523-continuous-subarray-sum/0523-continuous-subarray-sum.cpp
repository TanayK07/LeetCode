class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSum;
        prefixSum[0] = -1; 
        int sum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (k != 0) {
                sum %= k;
            }
            
            if (prefixSum.find(sum) != prefixSum.end()) {
                if (i - prefixSum[sum] > 1) {
                    return true;
                }
            } else {
                prefixSum[sum] = i;
            }
        }
        
        return false;
    }
};
