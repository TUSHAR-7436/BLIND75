class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a = nums.size();
        vector<int> ans(a, 1);
        int b = 1;
        for(int i = 0; i < a; i++) {
            ans[i] = b;
            b *= nums[i];
        }
        b = 1;
        for(int i = a - 1; i >= 0; i--) {
            ans[i] *= b;
            b *= nums[i];
        }
        return ans;
    }
};