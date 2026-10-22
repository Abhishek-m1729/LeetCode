class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int mr = 0, ml = 0, mu = 0, md = 0;
        for(auto ch : moves)
        {
            if(ch == 'R') mr ++;
            if(ch == 'L') ml ++;
            if(ch == 'U') mu ++;
            if(ch == 'D') md ++;
        }

        if(mr == ml && mu == md) return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna