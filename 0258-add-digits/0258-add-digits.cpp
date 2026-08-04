class Solution {
public:
    int addDigits(int num) {
        if(num / 10 == 0) return num;
        int sum = 0;
        while(num > 0) {
            int ld = num % 10;
            sum += ld;
            num /= 10;
        }

        return addDigits(sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna