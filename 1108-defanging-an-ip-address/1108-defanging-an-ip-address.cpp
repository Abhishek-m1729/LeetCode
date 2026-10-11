class Solution {
public:
    string defangIPaddr(string address)
    {
        string ans = "";
        for(auto &ch : address)
        {
            if(ch == '.') ans += "[.]";
            else ans += ch;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna