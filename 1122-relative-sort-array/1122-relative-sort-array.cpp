class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        sort(arr1.begin(), arr1.end());

        int j = 0, k = 0;
        while(j < arr2.size()) {
            for(int i=0; i<arr1.size(); ++i) {
                if(arr2[j] == arr1[i]) {
                    ans.emplace_back(arr1[i]);
                    k ++;
                }
            }
            j ++;
        }

        for(int x : ans) {
            arr1.erase(remove(arr1.begin(), arr1.end(), x), arr1.end());
        }

        for(int y : arr1) {
            ans.emplace_back(y);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna