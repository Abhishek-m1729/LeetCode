class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();

        vector<int> hash(26, 0);
        for(int i=0; i<n; ++i) {
            hash[s[i]-97] ++;
        }

        int dis_ele = 0;
        for(auto &ele : hash) {
            if(ele > 0) dis_ele ++;
        }

        return dis_ele;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna