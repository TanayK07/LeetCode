class MyCalendar {
public:
    MyCalendar() {
        

        
    }

    vector<pair<int,int>> m1;
    vector<int> v1;
    
    
    bool book(int start, int end) {
        for (const auto& p1 : m1){
            int st1=p1.first;
            int et1=p1.second;
            if (end>st1 &&  start<et1) return false;
        }
        m1.push_back(make_pair(start,end));
        
     
        // if(start<=v1[0]) return false;
        return true;
    
        

    

        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */











