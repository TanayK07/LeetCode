class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int c=0,pre=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // if(pre==k) c++;
            pre+=nums[i];
                        if(pre==k) c++;

            int rem=pre-k;
            c+=mp[rem];
            mp[pre]+=1;
            
        }
        return c;






    }

		
};