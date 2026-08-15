class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int a = nums.size();
        int b = 0;
        bool c = false;
        for(int i = 0; i < a; i++) {
            b = b ^ nums[i];
            if(nums[i] != 0) {
            c = true;
            }
        }
        if(b != 0) {
            return a;
        }
        if(c) {
            return a - 1;
        }
        return 0;
    }
};