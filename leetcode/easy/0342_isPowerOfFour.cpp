class Solution {
public:
    bool isPowerOfFour(int n) {
        int remainder = 0;
        bool result = false;
        if (n == 0) return result;
        while(n != 0 && remainder == 0) {
            // keep dividing by 3 only till the modulus is 0
            remainder = n % 4;
            n /= 4;
        }
        cout << n << " " << remainder;
        if (n == 0 && remainder == 1) return true;
        return false;
    }
};
