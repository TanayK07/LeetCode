class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double maxi=INT_MAX;
            sort(nums.begin(),nums.end());
            for (int i=0;i<nums.size()/2;i++){
                double new1=(double)(nums[i]+nums[n-i-1])/2;
                cout <<nums[i]<<"+"<<nums[n-i-1]<<endl;
                maxi=min(maxi,new1);
            }
            return maxi;
        
    }
};