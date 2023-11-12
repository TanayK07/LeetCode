class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,sum1=0;
    for (int i=0;i<nums.size();i++){
        sum+=i;
        sum1+=nums[i];

    }
    sum+=nums.size();
    cout << sum1<<sum;
return sum-sum1;
        
    }
};