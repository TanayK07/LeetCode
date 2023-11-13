class Solution {
public:
    string sortVowels(string s) {
        vector<char> s1;
        vector<int> g1;

        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                s1.push_back(s[i]);
                g1.push_back(i);
            }
        }

        sort(s1.begin(), s1.end());

        for (int i = 0; i < g1.size(); i++) {
            s[g1[i]] = s1[i];
        }

        return s;
    }

private:
    bool isVowel(char ch) {
        string vowels = "aeiouAEIOU";
        return vowels.find(ch) != string::npos;
    }
};
