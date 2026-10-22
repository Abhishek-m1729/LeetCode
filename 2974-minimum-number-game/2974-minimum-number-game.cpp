class Solution {
public:
    vector<int> numberGame(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> arr(n, 0);
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; ++i)
        {
            if(i % 2 != 0) arr[i-1] = nums[i];
            else arr[i+1] = nums[i];
        }

        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna