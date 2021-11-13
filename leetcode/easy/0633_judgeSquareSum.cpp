class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 1) return true;
        int other_number = 0;
        for(int i = 0; i <= sqrt(c); i++) {
                other_number = sqrt(c-(i*i));
                if(c-(i*i) == other_number*other_number)
                    return true;
        }
        
        return false;
    }
};
