class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> hash(nums.size() + 1, 0);
        for(auto &ele : nums) {
            hash[ele] ++;
        }

        int dup = -1;
        for(int i=1; i<nums.size(); ++i) {
            if(hash[i] > 1) { 
                dup = i;
                break;
            }
        }
        return dup;
    }   
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna