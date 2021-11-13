class Solution {
public:
    int mySqrt(int x) {
        // if input = 7 output = 2
        if(x == 0) return 0;
        if(x == 1) return 1;
        long high = x, low = 0, mid = 0;
        // cout << mid;
        while(low + 1 < high) {
            mid = (high + low) / 2;
            cout << high << " ";
            if(mid * mid == x)
                return mid;
            if(mid * mid >= x)
                high = mid;
            if(mid * mid < x)
                low = mid;
        }
        return low;
    }
};
