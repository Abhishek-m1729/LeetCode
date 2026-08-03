class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {        
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.rbegin(), nums.rend());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna