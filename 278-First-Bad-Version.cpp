// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int a =1;
        int b =n;
        
        while(a<b){
            int c = a+(b-a)/2;
        
        if(isBadVersion(c)){
            b = c;
        }
        else{
            a=c+1;
        }
        }
        return a;
    }
};