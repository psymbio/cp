#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp_result = 0, result = 0;
        for(int i = 0; i < gain.size(); ++i) {
            temp_result += gain[i];
            if(temp_result > result)
                result = temp_result;
        }
        
        return result;
    }
};
