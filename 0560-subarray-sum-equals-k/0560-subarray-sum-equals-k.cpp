class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int c=0,pre=0;
        int n=nums.size();
        mp[0]=1;
        for(int i=0;i<n;i++){
            pre+=nums[i];
            int rem=pre-k;
            c+=mp[rem];
            mp[pre]+=1;
            
        }
        return c;






    }

		
};