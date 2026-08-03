class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int first0_idx = -1;
        for(int i=0; i<n; ++i) {
            if(nums[i] == 0) {
                first0_idx = i;
                break;
            }
        }
        
        if(first0_idx == -1) {
            for(int i=0; i<n; ++i) {
                cout << nums[i] << " ";
            }
            return;
        }
        int left1 = first0_idx, left2 = first0_idx + 1;

        while(left2 < n) {
            if(nums[left2] != 0) {
                swap(nums[left1], nums[left2]);
                left1 ++;
                left2 ++;
            }
            else {
                left2 ++;
            }
        }

        for(int i=0; i<n; ++i) {
            cout << nums[i] << " ";
        }

        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna