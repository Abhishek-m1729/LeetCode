class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; ++i) {
            int less_count = 0;
            for(int j=0; j<n; ++j) {
                if(nums[j] < nums[i]) {
                    less_count ++;
                }
            }
            ans.emplace_back(less_count);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna