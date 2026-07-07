class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        while( low <= high){
            long long mid = low + (high-low)/2;
            long long mul = mid * mid;
            if(mul == x) return mid;
            else if(mul > x) high = mid - 1;
            else low = mid+1;
        }
        return high;
    }
};