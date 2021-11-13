// https://stackoverflow.com/questions/25821178/convert-lowercase-to-uppercase-using-ascii

// https://www.techiedelight.com/bit-hacks-part-4-playing-letters-english-alphabet/

// https://www.geeksforgeeks.org/toggle-case-string-using-bitwise-operators/


#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0; i<str.size();i++){
           if((str[i]>='A') && (str[i]<='Z')) str[i] ^= 32;
        }
        
        return str;
    }
};
