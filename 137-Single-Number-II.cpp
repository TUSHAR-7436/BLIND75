class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int b = 0; b < 32; b++) {
            int count = 0;
            for (int n : nums) {
                if ((n >> b) & 1)
                    count++;
            }
            if (count % 3 != 0) {
                result |= (1 << b);
            }
        }
        return result;
    }
};
