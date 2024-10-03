class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum1=0,n=nums.size(),keyMeBaby=0;
        int minMax=n;
        unordered_map<int,int> m1;
        m1[0]=-1;
        for(auto i: nums) sum1+=i;
        int modres=sum1%p;
        if(modres==0) return 0;
        for (int i=0;i<n;i++){
            keyMeBaby=(keyMeBaby+nums[i])%p;
            
            m1[keyMeBaby]=i;
            int newres=(keyMeBaby-modres+p)%p;
            
            
              if(m1.find(newres)!=m1.end())
                minMax=min(minMax,i-m1[newres]);
        }

            
        if(minMax!=n) return minMax;
        return -1;

        
    }
};