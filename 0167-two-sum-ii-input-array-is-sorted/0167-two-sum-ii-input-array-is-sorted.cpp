class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        unordered_map<int, int> mpp;

        for(int i=0; i<n; ++i) {
            int req_num = target - numbers[i];

            if(mpp.find(req_num) != mpp.end()) {
                return {mpp[req_num] + 1, i + 1};
            }

            mpp[numbers[i]] = i;
        }

        return {-1, -1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna