class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i=0; i<matrix.size(); ++i) {
            int count1 = 0;
            for(int j=0; j<matrix[i].size(); ++j) {
                if(matrix[i][j] == 1) count1 ++;
            }

            ans.push_back(count1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna