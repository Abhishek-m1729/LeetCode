class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int k = 0, j = 0;
        for(int i=0; i<n; ++i) {
            if(nums[i] % 2 == 0) {
                ans[2 * (i-j)] = nums[i];
                k ++;
            }
            else {
                ans[2 * (i-k) + 1] = nums[i];
                j ++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna