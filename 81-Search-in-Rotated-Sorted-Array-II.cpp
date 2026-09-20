class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int a = 0;
    int b = nums.size()-1;
    
    while(a <= b){
    int m = (a + b) / 2;
    if(numss[m] == target)
        return true;
    if(nums[a] == nums[m] && nums[m] == nums[b]){
        a++;
        b--;
    }
    else if(nums[a] <= nums[m]){
        if(nums[a] <= target && target < nums[m])
            b = m - 1;
        else
            a = m + 1;
    }
    else{

        if(nums[m] < target && target <= nums[b])
            a = m + 1;
        else
            b = m - 1;
    }
}

return false;
    }
};