class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n=f.size();
        int l=0,r=0,maxi=0;
        int k=2;
        unordered_map<int,int>mp;
        while(r<n){
        mp[f[r]]++;
       if (mp.size()>k) 
       {
        
        mp[f[l]]--;

       if (mp[f[l]]==0) mp.erase(f[l]);
                l++;
       }
       if (mp.size()<=2) maxi=max(maxi,r-l+1);
       r++;
        }
        return maxi;
    }
};