class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        arr.insert(arr.end(), nums1.begin(), nums1.end());
        arr.insert(arr.end(), nums2.begin(), nums2.end());

        sort(arr.begin(), arr.end());
        int a = arr.size();
        int b = a / 2;

        float sum =0;
        if(a%2==0){
                sum = arr[b] + arr[b-1];
            return sum/2;
        }
        else{
            return arr[b];
        }
    }
};
