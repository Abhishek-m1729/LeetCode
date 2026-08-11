class Solution {
public:
    int mirrorDistance(int n) {
        string num = to_string(n);
        reverse(num.begin(), num.end());

        int reversed = stoi(num);

        return abs(n - reversed);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna