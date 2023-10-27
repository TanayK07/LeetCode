// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=0,e=n;
int mid=s+(e-s)/2;

        while(e-s>1){
        mid=s+(e-s)/2;
        if (isBadVersion(mid)) 
        e=mid;
        else 
        s=mid;
        }
        return e;
        
    }
};