#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        if(n==1)
            return 0;
        if(n==2)
            return 1;
        if(n%2==1)
            sum=n/2+numberOfMatches(n/2+1);
        else
            sum=n/2+numberOfMatches(n/2);
        return sum;
        
    }
};
