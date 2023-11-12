class Solution {
public:
    int hammingWeight(uint32_t n) {
            bitset<32> b1(n); 
        return b1.count();
        
    }
};