
// #include "test_10000.hpp"

//#pragma GCC optimize ("Ofast,inline,omit-frame-pointer")
static auto x = []() {ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL; }();

class Solution
{
    public:
    int countMatches(vector<vector<string>>& items, string key, string val)
    {
        int indx = key == "type" ? 0 : key == "color"? 1 : 2;
        return count_if(items.begin(), items.end(), [&](const auto& i) {return i[indx] == val;});
    }
};
