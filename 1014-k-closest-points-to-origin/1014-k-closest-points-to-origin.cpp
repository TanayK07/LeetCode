class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto mathmebaby =[](auto& p ){
            int mmm = p[0]*p[0]+p[1]*p[1];
            return mmm;
        };
             sort(begin(points), end(points),
              [&](auto& a, auto& b)
              { return mathmebaby(a) < mathmebaby(b); 
              });

       points.resize(k);
        return points;
        
    }
};