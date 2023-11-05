class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
            for (auto i = 0; i < grid.size(); i++) {
        int k = 0;
        for (auto i: grid[i]) if (!i) k++;
        if (k == 1) return i;
    }
    return -1;
        

    }
};