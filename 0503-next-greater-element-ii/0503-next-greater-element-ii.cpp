class Solution {
public:
 vector<int> nextGreaterElements(vector<int>& nums) {
        stack <int> st;
        int n=nums.size();
                vector<int> res(n);

        for (int i=2*n-1;i>=0;i--){
            while(!st.empty() && nums[i%n]>=st.top()) st.pop();
            if(i<n) res[i]=st.empty()? -1 : st.top();
            st.push(nums[i%n]);
        }
        return res;
    }
};