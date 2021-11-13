class Solution {
public:
    int balancedStringSplit(string s) {
        // Loop from left to right maintaining a balance variable when it gets an L
        // increase it by one otherwise decrease it by one.
        
        // Whenever the balance variable reaches zero then we increase the answer by one.
        int temp_count = 0, result = 0;
        for(char c: s) {
            temp_count += c == 'L' ? -1: 1;
            if (temp_count == 0) result++;
        }
        return result;
    }
};
