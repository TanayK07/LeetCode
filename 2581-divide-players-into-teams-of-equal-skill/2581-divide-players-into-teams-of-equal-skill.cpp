#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ll pres=0;
        int n=skill.size();
        sort(skill.begin(),skill.end());
        ll fsum=skill[0]+skill[n-1];
        ll twosum=0,twomul=0;
        // for(int i=0;i<skill.size();i++)
        // int 
        while(skill.size()!=0)
        {
            cout<<skill[0]<<" "<<skill[skill.size()-1]<<endl;
            twosum=skill[0]+skill[skill.size()-1];
            twomul=skill[0]*skill[skill.size()-1];
            if(fsum!= twosum) return -1;
            else {
                cout<<"goes into else"<<endl;
                    pres+=twomul;

                skill.erase(skill.begin());
                // skill.erase(skill.end()-1);
                skill.pop_back();
                cout<<skill.size()<<" : size"<<endl;

            }
            // cout<<
            
        }
        return pres;

        


        
    }
};