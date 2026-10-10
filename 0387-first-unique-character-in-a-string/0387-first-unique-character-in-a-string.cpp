class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        int n = s.length();

        for(auto &ch : s) count[ch - 'a']++;
        int idx = 0;
        for(auto &ch : s){
            if(count[ch - 'a'] == 1) return idx;  
            idx ++;
        } 
        
        return -1;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna