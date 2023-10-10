class Solution {
public:
    int minOperations(vector<int>& nums) {
        int N = nums.size();
    sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
   nums.erase(it, nums.end());
        int M = nums.size();
      int l = 0,r=0,b=0;

        while (l < M) {
            while (r < M && nums[r] - nums[l] <= N - 1) {
                r++;
            }
            b = max(b, r - l);
            l++;
        }
        int k=N-b;

        return k;
    }
};
