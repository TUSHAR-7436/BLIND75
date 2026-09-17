class Solution {
public:
    int longestSubstring(string s, int k) {
        if (s.size() < k)
            return 0;
        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] < k) {
                int j = i + 1;
                while (j < s.size() && freq[s[j] - 'a'] < k)
                    j++;
                return max(longestSubstring(s.substr(0, i), k),
                           longestSubstring(s.substr(j), k));
            }
        }
        return s.size();
    }
};