class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if( (sx==fx && sy==fy) &&  t==1){
           // if ((t>=2 && t%2==0) || t==1)
            return false;
        }

        if (max(abs(sx-fx),abs(sy-fy))<=t)
        return true;
        return false;
        
    }
};