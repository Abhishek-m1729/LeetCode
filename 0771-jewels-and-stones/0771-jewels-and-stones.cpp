class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total = 0;
        for(auto ch : jewels)
        {
            int sum = count(stones.begin(), stones.end(), ch);
            total += sum;
        }

        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna