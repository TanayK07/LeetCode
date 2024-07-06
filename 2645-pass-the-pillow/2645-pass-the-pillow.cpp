class Solution {
public:
    int passThePillow(int n, int time) {
        int times=0;
        times=time/(n-1);
        int mod1=time%(n-1);
        cout <<times<<endl;
        cout<<mod1<<endl;

        if(times%2==0) return mod1+1;
        else return n-mod1;

        
    }
};