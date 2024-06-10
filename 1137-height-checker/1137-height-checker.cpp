class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0;
        vector<int> v=heights;
        sort(v.begin(),v.end());
         for (int i = 0; i < heights.size(); ++i) c+=(heights[i]!=v[i]);
        return c;
        
        
    }
};