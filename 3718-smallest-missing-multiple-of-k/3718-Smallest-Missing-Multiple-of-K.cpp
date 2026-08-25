class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % k == 0){
                ans.push_back(nums[i]);
            }
        }

        int multiple = k;

        while(true){
            bool found = false;

            for(int i = 0; i < ans.size(); i++){
                if(ans[i] == multiple){
                    found = true;
                    break;
                }
            }

            if(!found){
                return multiple;
            }
            multiple += k;
        }
    }
};