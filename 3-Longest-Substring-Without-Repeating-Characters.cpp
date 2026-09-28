class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};   // to track characters
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {

            freq[s[right]]++;    // include current character

            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }

            // update answer
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
