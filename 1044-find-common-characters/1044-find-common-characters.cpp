class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(128, 0), freq2(128, 0);

        // Initialize the frequency array for the first word
        for (char c : words[0]) freq[c]++;

        // Process each word in the list starting from the second word
        for (int i = 1; i < words.size(); i++) {
            fill(freq2.begin(), freq2.end(), 0); // Reset freq2 for the current word
            for (char c : words[i]) freq2[c]++; // Count frequency of characters in the current word

            for (int j = 0; j < 128; j++) {
                if (freq[j] > 0 && freq2[j] > 0) {
                    // Keep the minimum count between freq and freq2
                    freq[j] = min(freq[j], freq2[j]);
                } else {
                    // If character is not present in both, set its frequency to 0 in freq
                    freq[j] = 0;
                }
            }
        }

        // Form a vector from the freq array
        vector<string> result;
        for (int i = 0; i < 128; i++) {
            while (freq[i] > 0) {
                result.push_back(string(1, i));
                freq[i]--;
            }
        }

        return result;
    }
};
