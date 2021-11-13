#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int numberOfMatches(int n) {
        int result = n-1;
        /*while(n > 0) {
            if(n % 2 == 0) {
             result += n/2;
            n /= 2;
            }
            else {
             result += (n - 1)/2;
                 n = (n-1)/2+1;
            }
        }*/
        return result;
    }
};
