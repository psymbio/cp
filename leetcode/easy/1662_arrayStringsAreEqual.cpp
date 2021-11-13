#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string string_1, string_2;
        for(string s: word1) string_1 += s;
        for(string s: word2) string_2 += s;
        if (string_1.compare(string_2) == 0)
            return true;
        return false;
    }
};
