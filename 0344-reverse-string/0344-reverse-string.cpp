class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());

        for(auto &ele : s) {
            cout << ele;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna