class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;
        while(n > 0) {
            int ld = n % 10;
            score += ld;
            n /= 10;
        }

        return score;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna