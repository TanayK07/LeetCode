class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int c=0,res=0;
        for (int i=0;i<arr.size();i++){
            if (arr[i]==1)
            c++;
            if (arr[i]==0)
            c=0;
            res=max(c,res);
            
        }
        return res;
        
        
    }
};