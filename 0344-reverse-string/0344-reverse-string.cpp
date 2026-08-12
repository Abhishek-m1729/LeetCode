class Solution {
public:
    void reverseString(vector<char>& s) {

        // we can use swapping technique.
        // make 2 ponter left and right and while(left < right) swap and move.
        
        reverse(s.begin(), s.end());

        for(auto &ele : s) {
            cout << ele;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna