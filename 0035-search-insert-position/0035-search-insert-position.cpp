class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size()==0) return 0;
        int n=nums.size();
        int l=0;
        int r=n-1;
        while (l<r){
            int m=l+(r-l)/2;
            if (nums[m]==target) return m;
            else if (nums[m]>target) r=m;
            else 
            l=m+1;

        }
        return nums[l]<target ? l+1:l;
        
    }
};