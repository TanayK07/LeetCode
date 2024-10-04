#define ll long long
auto speedUp = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ll pres=0;
        ll n=skill.size();
        // sort(skill.begin(),skill.end());
        // ll fsum=skill[0]+skill[n-1];
        ll twosum=0,twomul=0,sum=0;
        for (int i : skill) sum+=i;
         if (sum % (n / 2) != 0) return -1;
        ll tsum = sum / (n/2); 
        unordered_map<ll,int> m1;
        for (int i : skill) m1[i]++;
    //     for (const auto& pair : m1) {
    //     cout << "Element: " << pair.first << ", Count: " << pair.second << endl;
    // }
        for (auto it = m1.begin(); it != m1.end(); ++it) 
              if (!m1.count(tsum - it->first) || m1[tsum - it->first] != it->second) 
                return -1;
            else 
                pres += it->second * it->first * (tsum - it->first);
            

            return pres/2;

    
        // for (int i: skill) sum+=i;
        // double l1=sum/double(n);
        // if(l1!=)
        // if(floor(l1) != ceil(l1)) return -1;
        // cout<<l1<<endl;
        // for(int i=0;i<skill.size();i++)
        // int 
        // while(skill.size()!=0)
        // {
        //     cout<<skill[0]<<" "<<skill[skill.size()-1]<<endl;
        //     twosum=skill[0]+skill[skill.size()-1];
        //     twomul=skill[0]*skill[skill.size()-1];
        //     // if(fsum!= twosum) return -1;
        //     // else {
        //     //     cout<<"goes into else"<<endl;
        //     //         pres+=twomul;

        //     //     skill.erase(skill.begin());
        //     //     // skill.erase(skill.end()-1);
        //     //     skill.pop_back();
        //     //     cout<<skill.size()<<" : size"<<endl;

        //     // }
        //     // cout<<
            
        // }
        return -1;

        
    }
};
