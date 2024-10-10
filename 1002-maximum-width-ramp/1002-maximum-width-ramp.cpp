class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> in(n);
        
        for (int i = 0; i < n; ++i) {
            in[i] = i;
        }
          for(auto i: in) cout <<i<< " ";
        cout <<endl;

        sort(in.begin(), in.end(), [&](int a, int b) {
            return nums[a] < nums[b] || nums[a]==nums[b] && b>a  ;
        });

        for(auto i: in) cout <<i<< " ";
        cout <<endl;

        int l = 0,r=in[0];

        for (int j = 1; j < n; ++j) {
            l = max(l, in[j] - r);
            r = min(r, in[j]);
        }

        return l;
    }
};
