class NumArray {
public:
    vector<int>prefSum;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefSum.resize(n+1,0);
        for(int i=1;i<=n;i++){
            prefSum[i]=nums[i-1]+prefSum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        left++;
        right++;
        return prefSum[right]-prefSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */