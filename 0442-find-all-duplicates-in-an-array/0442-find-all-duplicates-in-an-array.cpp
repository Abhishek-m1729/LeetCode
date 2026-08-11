class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> hash(nums.size() + 1, 0);
        vector<int> ans;

        for(auto &ele : nums) {
            hash[ele] ++;
        }

        for(int i=1; i<nums.size()+1; ++i) {
            if(hash[i] > 1) ans.emplace_back(i);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna