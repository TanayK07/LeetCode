class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> m1;
        vector<int> v1;
        for (int num : arr1) m1[num]++;
        
        for (int num : arr2) {
            while (m1[num] > 0) {
                v1.push_back(num);
                m1[num]--;
            }
        }
        
        int l = v1.size();  // Mark the index from where to start sorting the rest
        for (auto& [num, count] : m1) {
            while (count-- > 0) v1.push_back(num);
        }
        sort(v1.begin() + l, v1.end());  // Sort remaining elements
        
        return v1;
    }
};
