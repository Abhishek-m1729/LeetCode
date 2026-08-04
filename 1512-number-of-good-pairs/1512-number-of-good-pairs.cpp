class Solution {
public:
    int nCr(int n, int r = 2) {
        if (r > n) return 0;
        if (r > n - r) r = n - r; 
        int result = 1;
        for (int i = 0; i < r; i++) {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }


    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();

        vector<int> hash(101);
        for(int i=0; i<n; ++i) {
            hash[nums[i]] ++;
        }

        int good_pairs = 0;
        for(auto &ele : hash) {
            if(ele >= 2) {
                good_pairs += nCr(ele);
            }
        }

        return good_pairs;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna