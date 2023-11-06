class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int z1=0,z2=0;
        int l=0;
        long long res=0;
        for (auto i:nums1){
            if (i==0) z1++;
            }
                for (auto i:nums2){
            if (i==0) z2++;
            }
            long long sum1=0;
            long long sum2=0;

         sum1=accumulate(nums1.begin(), nums1.end(), sum1);
         sum2=accumulate (nums2.begin(),nums2.end(),sum2);
        if (z1==0 && sum1<sum2+z2 ) return -1;
        if (z2==0 && sum2<sum1 + z1) return -1;
        return max(sum1+z1,sum2+z2);
    }

};