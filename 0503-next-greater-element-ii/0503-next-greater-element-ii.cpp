class Solution {
public:
 vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        vector<int>v(n);
        for(int i=n-2;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
            if(!s.empty())v[i]=s.top();
            else v[i]=-1;
            s.push(nums[i]);
        }
        return v;
    }
};