class Solution {
private:
    int helper(vector<int> &nums,int k){
     int n=nums.size(),l=0,r=0,c=0;
        unordered_map<int,int> mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                        mp[nums[l]]--;
                        if(mp[nums[l]]==0) mp.erase(nums[l]);
                        l++;
            }
            c+=r-l+1;
            r++;
        }
        return c;

    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
   
        return helper(nums,k)-helper(nums,k-1);
    }
};