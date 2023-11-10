class Solution {
public:
   vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> res(adjacentPairs.size() + 1);
        int ext;
        map<int, vector<int>> mp;
        for (auto i : adjacentPairs) {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        for (auto i : mp) {
            if (i.second.size() == 1) {
                ext = i.first;
                break;
            }
        }
        res[0] = ext;
        vector<int> temp = mp[res[0]];
        res[1] = temp[0];
        int ind = 2;
        while (ind != res.size()) {
            temp = mp[res[ind - 1]];
            if (res[ind - 2] == temp[0]) 
                res[ind] = temp[1];
            else 
                res[ind] = temp[0];
            ind++;
        }
        return res;
    }
};