class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();

        set<int> st;
        for(int i=0; i<n; ++i) {
            st.insert(s[i]);
        }

        return st.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna