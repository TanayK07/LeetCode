class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    
    vector<pair<int,int>> sb,db;
    // vector<int> v1;
    
    
    bool book(int start, int end) {
        for (const auto& p1 : db){
            int st1=p1.first;
            int et1=p1.second;
            if (end>st1 &&  start<et1  ) return false;
        }
        for (const auto& p2: sb){
            int st1=p2.first;
            int et2=p2.second;
            if (end>st1 &&  start<et2  ){
            int max1val=max(st1,start);
            int min2val=min(et2,end);
            db.push_back(make_pair(max1val,min2val));
            }
        }
        sb.push_back(make_pair(start,end));
        
     
        return true;
    
    }

    

        
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */