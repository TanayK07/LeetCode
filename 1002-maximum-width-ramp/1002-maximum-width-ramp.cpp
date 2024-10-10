class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxi(n);
        // int first=nums[0],last=nums[n-1];
        // mins[0] = first;
        // for (int i = 1; i < n; ++i) {
        //     mins[i] = min(mins[i - 1], nums[i]);
        // }
        // for (auto i : mins) cout << i<< " "; 
        // cout <<endl;

        maxi[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            maxi[i] = max(maxi[i + 1], nums[i]);
        }
        for (auto i : maxi) cout << i<< " ";
                cout <<endl;



        int i= 0, j = 0, res = 0;
        while (j < n) {
            if (nums[i] <= maxi[j]) {
                res = max(res, j - i);
                j++;
            }
             else  i++;
        }

        return res;
    }
};
