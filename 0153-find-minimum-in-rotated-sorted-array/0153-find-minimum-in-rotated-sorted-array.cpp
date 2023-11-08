class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        if (nums.size()==1) return nums[0];
        while (l<h){
            int m=l+(h-l)/2;
            if (nums[l]<nums[h]) return nums[l];
            else if (nums[m]>nums[h]) 
            l=m+1;
            else h=m;

           
        }
        return nums[l];
        
    }
};