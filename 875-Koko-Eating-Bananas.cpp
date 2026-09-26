class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long low = 1;
        long high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low <= high){
            long mid = low + (high - low) / 2;
            long long hours = 0;
            for(int pile : piles){
                hours += (pile + mid - 1) / mid;
            }
            if(hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};