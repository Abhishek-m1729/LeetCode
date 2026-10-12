class Solution {
public:
    int maxFreqSum(string s) 
    {
        unordered_map<char, int> freq;

        for(auto &ch : s) freq[ch]++;

        int vmax = max({freq['a'], freq['e'], freq['i'], freq['o'], freq['u']});
        int cmax = 0;
        for(char ch='a'; ch<='z'; ++ch) 
        {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                cmax = max(cmax, freq[ch]);
            }
        }

        return vmax + cmax;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna