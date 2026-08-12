class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    string reverseVowels(string s) {
        int n = s.size();

        int left = 0, right = n-1;

        while(left < right) {
            if(isVowel(s[left]) && isVowel(s[right])) {
                swap(s[left], s[right]);
                left ++;
                right --;
            }
            else if(isVowel(s[left]) && !(isVowel(s[right]))) {
                right --;
            }
            else if(isVowel(s[right]) && !(isVowel(s[left]))) {
                left ++;;
            }
            else {
                left ++;
                right --;
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna