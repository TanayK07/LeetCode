class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = size(dist), ans = 0, T = 0;
        multiset<double> s;
        for(int i = 0; i < n; i++) s.insert(dist[i] * 1. / speed[i]);   // sorting by time to reach city
        for(auto& el : s) 
            if(T >= el) break;     // monster reached city
            else ans++, T++;       // kill monster and increase time
        return ans;
    }
};