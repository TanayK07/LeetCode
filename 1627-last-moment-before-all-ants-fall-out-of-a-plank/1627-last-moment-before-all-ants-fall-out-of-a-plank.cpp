class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       int res=0;
        if(!left.empty()) {
            int l = *max_element(left.begin(), left.end());
            res=l;
        }
        if(!right.empty()) {
            int r = *min_element(right.begin(), right.end());
            res = max(res,n-r);
        }
        
        return res;
    }
};