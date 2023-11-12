class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& r, int s, int t) {
        if (s==t) return 0;
        int mx=-1;
        for (auto &route:r){
            for (int j : route){
                mx=max(mx,j);
            }
    }
    if (mx<t) return -1;
    
        int n = r.size();
        vector<int> minBusesToReach(mx + 1, INT_MAX);
        minBusesToReach[s] = 0;

        bool flag = true;
        while (flag) {
            flag = false;
            for (const auto& route : r) {
                int min = n+1;
                for (int stop : route) {
                    min = std::min(min, minBusesToReach[stop]);
                }
                min++;
                for (int stop : route) {
                    if (minBusesToReach[stop] > min) {
                        minBusesToReach[stop] = min;
                        flag = true;
                    }
                }
            }
        }

        return (minBusesToReach[t] < n+1) ? minBusesToReach[t] : -1;
    }

};