class Solution {
public:
    string toLowerCase(string s)
    {
        for(auto &ch : s)
        {
            if(ch <= 'Z' && ch >= 'A') ch += 32;
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna