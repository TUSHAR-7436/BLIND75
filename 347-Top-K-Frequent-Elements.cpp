class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int a = nums.size();
        sort(nums.begin(), nums.end());
        int c = 1;
        for(int i = 0; i < a; i++) {
            if(i == a - 1 || nums[i] != nums[i + 1]) {
                if(c >= k) {
                    ans.push_back(nums[i]);
                }
                c = 1;
            }
            else {
                c++;
            }
        }
        return ans;
    }
};