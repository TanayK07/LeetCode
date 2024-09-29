class AllOne {
public:
    AllOne() {

        
    }


    unordered_map<string,int> m1;
    set<pair<int,string>> s1;
    
    void inc(string key) {
        s1.erase({m1[key],key});
        m1[key]++;
        s1.insert({m1[key],key});
                
    }
    
    void dec(string key) {
        s1.erase({m1[key],key});
        m1[key]--;
        if(m1[key]>0) s1.insert({m1[key],key});  

    }
    
    
    string getMaxKey() {
        if(s1.size()==0) return "";
        return prev(s1.end())->second;

        
    }
    
    string getMinKey() {
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

