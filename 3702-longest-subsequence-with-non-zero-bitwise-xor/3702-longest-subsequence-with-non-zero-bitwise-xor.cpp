class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xor_ = 0;
        int count0 = 0;
        for(int i=0; i<n; ++i) {
            xor_ ^= nums[i];
            if(nums[i] == 0) count0 ++;
        }

        if(xor_ != 0) return n;
        else if(count0 == n) return 0;
        else return n-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna