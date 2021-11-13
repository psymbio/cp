// called finding the digital root of a number
//
// https://en.wikipedia.org/wiki/Digital_root
class Solution {
public:
    int addDigits(int num) {
        int base = 10;
        if(num == 0) return 0;
        else return  1 + ((num -1) % (base - 1));
    }
};
