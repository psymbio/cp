class Solution {
public:
    bool canWinNim(int n) {
        // if we both play optimally with my turn being the first, that just means I keep winning 
        // except in the one edge case where I can't help but to lose.
        // that edge case is n = 4 or n is any multiple of 4
        
        // it's kind of a dumb question but yeah
        
        if(n % 4 != 0)
            return true;
        
        else return false;
    }
};
