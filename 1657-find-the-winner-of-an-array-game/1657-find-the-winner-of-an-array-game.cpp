class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int c = 0;
        int c1 = arr[0];
        //arr[0] = max(arr[0], arr[1]);

        for (int i = 1; i < arr.size() ; i++) {
            if (c1>arr[i])
            c++;
            else {
                c1=arr[i];
                c=1;
            }
           if (c==k) return c1;
        }
            return c1;
    }
            
};