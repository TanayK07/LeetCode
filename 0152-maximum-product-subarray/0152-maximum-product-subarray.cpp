class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN, prod = 1;
        int length = nums.size();
        
        for(int i = 0; i < nums.size(); i++)
        {
            result = max(result, prod *= nums[i]);
            if(nums[i] == 0) prod = 1;
        }
        
        prod = 1;
        for(int i = nums.size()-1; i >= 0; i--)
        {
            result = max(result, prod *= nums[i]);
            if(nums[i] == 0) prod = 1;
        }
        
        return result;
    }
};