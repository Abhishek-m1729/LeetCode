class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);   
        string word;
        vector<string> words;

        while(ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string ans;
        for(auto &ele : words) {
            ans += ele + " ";
        }

        ans.pop_back();

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna