class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);

        int l = 0, r = n-1, iter = n-1;
        while(l <= r)
        {
            if(abs(nums[l]) < abs(nums[r]))
            {
                ans[iter] = nums[r]*nums[r];
                r --;
            } 
            else if(abs(nums[l]) >= abs(nums[r])) 
            {
                ans[iter] = nums[l]*nums[l];
                l ++;
            }
            iter --;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna