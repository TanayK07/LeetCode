class AllOne {
public:
    AllOne() {

        
    }


    unordered_map<string,int> m1;
    // multimap<int, string> MM;
    set<pair<int,string>> s1;
    
    void inc(string key) {
        // if(key!="") m1[key]++;
        // else m1[key]=1;
        // MM.insert({m1[key],key});  
        // cout<<"incr"<<m1[key]<<" "<<key<<endl;
        s1.erase({m1[key],key});
        m1[key]++;
        s1.insert({m1[key],key});
                
    }
    
    void dec(string key) {
        // if(m1[key]==0) m1.erase(key);
        // else m1[key]--;
        
        // MM.insert({m1[key],key}); // syntax      
        // cout<<"decr"<<m1[key]<<" "<<key<<endl;
        s1.erase({m1[key],key});
        m1[key]--;
        if(m1[key]>0) s1.insert({m1[key],key});


   

    }
    
    
    string getMaxKey() {


        // return prev(MM.end())->second;
        if(s1.size()==0) return "";
        return prev(s1.end())->second;

        
    }
    
    string getMinKey() {
        // cout<<"whole MAP"<<endl;
        // for(auto it: MM) cout<<"MAp"<< it.first<<" "<<it.second<<endl;
        if(s1.size()==0) return "";

        return s1.begin()->second;

        
    }



};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */

