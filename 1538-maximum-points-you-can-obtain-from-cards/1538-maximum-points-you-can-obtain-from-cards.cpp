class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n = c.size();
       int lsum=0,rsum=0;
       int ind=k;
       for (int i=0;i<k;i++) lsum+=c[i];
        int maxi=lsum;
    for (int i=k-1;i>=0;i--){
        lsum-=c[i];
        rsum+=c[n-1];
        n--;
            maxi=max(maxi,lsum+rsum);


    }
    return maxi;
    }

};
