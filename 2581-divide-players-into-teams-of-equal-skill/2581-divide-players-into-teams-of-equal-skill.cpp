#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ll pres=0;
        int n=skill.size();
        sort(skill.begin(),skill.end());
        ll fsum=skill[0]+skill[n-1];
        ll twosum=0,twomul=0;
        for(int i=0;i<skill.size()/2;i++){
            cout<<skill[i]<<" "<<skill[n-1-i]<<endl;
            twosum=skill[i]+skill[n-i-1];
            twomul=skill[i]*skill[n-1-i];
            if(fsum!= twosum) return -1;
            else {
                cout<<"goes into else"<<endl;
                    pres+=twomul;

                // skill.erase(skill.begin());
                // // skill.erase(skill.end()-1);
                // skill.pop_back();

            }
            // cout<<
            
        }
        return pres;

        


        
    }
};