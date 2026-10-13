class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(auto &ele : nums)
        {
            if(ele % 2 == 0) ele = 0;
            else ele = 1;
        }
        sort(nums.begin(), nums.end());

        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna