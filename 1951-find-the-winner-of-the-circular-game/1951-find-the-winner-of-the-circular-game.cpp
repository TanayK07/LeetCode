class Solution {
public:
    int findTheWinner(int n, int k) {
        vector <int> v1;
        int j=0;
        for (int i=1;i<=n;i++){
            v1.push_back(i);
        }
    while(v1.size()>1){
        j=(j+(k-1))%v1.size();
        v1.erase(v1.begin()+j);

    }
        return v1[0];
        
    }
};