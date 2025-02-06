class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
     unordered_map<int,int> m1;
     vector<int> prod= productOfPairs(nums);
     int cnt=0;
     vectorToFrequencyMap(prod,m1);
         for (const auto& pair : m1) {
            if(pair.second>1){
                cnt += (pair.second * (pair.second - 1)) / 2;  // Combination formula C(n,2)
            }

         }
        return cnt * 8;  // Each tuple can be arranged in 8 ways
    }

    void vectorToFrequencyMap(const std::vector<int>& vec, std::unordered_map<int, int>& freqMap) {
    for (int num : vec) {
        freqMap[num]++;  
    }
}



    vector<int> productOfPairs(const vector<int>& vec) {
    vector<int> result;
    int n = vec.size();
    if (n < 2) return result;
    result.reserve(n * (n - 1) / 2); 
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            result.push_back(vec[i] * vec[j]);
        }
    }
    return result;
}
};