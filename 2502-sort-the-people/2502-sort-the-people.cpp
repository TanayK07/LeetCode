class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> m1;
        for (int i=0;i<names.size();i++)
            m1.push_back({heights[i],names[i]});
        sort(m1.rbegin(),m1.rend());
        vector<string> m2;
        for(int i=0;i<names.size();i++)
            m2.push_back(m1[i].second);

            return m2;
        


        

        
    }
};