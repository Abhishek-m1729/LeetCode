class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        int single_num = 0;
        for(int i=0; i<n; ++i) {
            single_num ^= nums[i];
        }

        return single_num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna