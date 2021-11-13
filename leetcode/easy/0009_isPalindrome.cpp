class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long digit = 0, result = 0, num = x;
        while(num > 0) {
            digit = num % 10;
            result = result * 10 + digit;
            num /= 10;
        }
        if (x == result) return true;
<<<<<<< HEAD
        
        return false;
    }
};
=======

        return false;
    }
};


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s= to_string(x);

        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};
>>>>>>> 35f904796bcf40ba1d4f8132c8f9419999a926ac
