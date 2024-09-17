class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> m1;
            stringstream ss1(s1), ss2(s2);
            string word1,word2;
            while(ss1>>word1) m1[word1]++;
            while (ss2>>word2) m1[word2]++;
            vector<string> v1;


            for (const auto& x:m1){
                if (x.second==1) v1.push_back(x.first);

            }
            return v1;



        
    }
};