class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        float temp = 0, digit = 0, number = 0;
        int n = digits.size()-1;
        for(int i = 0; i <= n; i++) {
            temp = digits[i] * pow(10, n - i);
            number += temp;
        }
        
        ++number;
        vector<int> result;
        while(number>0)
        {
           result.push_back(number%10);
           number/=10;
        }
        reverse(result.begin(), result.end());
        return result;
     }
};
// didn't work
//
//
//



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // can't convert to int and do the question
        vector <int> result;
        int carry_forward = 0;
        for(int i = digits.size()-1; i >= 0; i--) {
            if(i == digits.size()-1 || carry_forward == 1) {
                if (digits[i]+1 < 10) {
                    result.push_back(digits[i]+1);
                    carry_forward = 0;
                }
                else {
                    result.push_back(0);
                    carry_forward = 1;
                }
            } else
                result.push_back(digits[i]);
        }
        if(carry_forward > 0)
            result.push_back(carry_forward);
        reverse(result.begin(), result.end());
        return result;
     }
};
