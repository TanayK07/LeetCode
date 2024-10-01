class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // int l=0,r=0;
        int n=arr.size();
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<arr.size()/2;i++){
        //     if((arr[i]+arr[n-1-i])%k!=0) return false;
        // }
        unordered_map<int,int> m1;
        // for (auto i: arr) m1[(i)]++;
        for (auto i: arr){
        // if(arr[i]<0) m1[k]++;
        int i1=i-(i/k)*k;
        if(i1<0) i1+=k;
        m1[i1]++;
    
        }
        if(m1[0]%2!=0) return false;
        for (int i=1;i<=k/2;i++)  if(m1[i]!=m1[k-i]) return false;

        return true;

        
    }
};