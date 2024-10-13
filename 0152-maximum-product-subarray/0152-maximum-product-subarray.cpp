class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=0;
        int p=1;
        for (int i=0;i<nums.size();i++){
            l=max(l,p*=nums[i]);
            if (nums[i]==0) p=1;
            
        }

        
    }
};