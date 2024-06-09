class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),pre=0,c=0;
        map<int,int> mp;
        mp[0]=1;
        for (int i=0;i<n;i++){
            pre+=nums[i];
            // if(pre%k==0) c++;
            int rem=pre%k;
            if(rem<0)rem+=k;
                        // if(mp.find(rem)!=mp.end())

                        c+=mp[rem];

            mp[rem]++;
        }
        return c;
        
    }
};