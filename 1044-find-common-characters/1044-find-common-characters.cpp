class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, INT_MAX); // To hold minimum frequency of each character across all words
        
        // Process each word
        for (const string& word : words) {
            vector<int> currentFreq(26, 0);
            for (char c : word) {
                currentFreq[c - 'a']++; // Count frequency of each character in the current word
            }
            // Update freq to hold the minimum frequency of each character
            for (int i = 0; i < 26; ++i) {
                freq[i] = min(freq[i], currentFreq[i]);
            }
        }

        // Form the result vector from the freq array
        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (freq[i] > 0) {
                result.push_back(string(1, i + 'a'));
                freq[i]--;
            }
        }

        return result;
    }
};
