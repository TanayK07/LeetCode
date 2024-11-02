class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.length();
        bool c1=(sentence[0]==sentence[n-1]);
        if (!c1) return false;
        for(int i=0;i<n;i++){
            if(sentence[i]==' ') if(sentence[i-1]!=sentence[i+1]) return false;
        }
        return true;
        
        
    }
};