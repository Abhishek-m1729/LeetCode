class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        for(auto &ele : nums) ele *= ele;
        sort(nums.begin(), nums.end());

        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna