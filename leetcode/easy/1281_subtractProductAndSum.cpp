class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1, add = 0, dig = 0;
        while(n) {
            dig = n%10;
            mul *= dig;
            add += dig;
            n /= 10;
        }
        return (mul - add);
    }
};
