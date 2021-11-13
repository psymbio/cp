#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int result = 0;
        for(int i = 0; i < endTime.size(); ++i) {
            if(endTime[i] >= queryTime && startTime[i] <= queryTime)
                result++;
        }
        
        return result;
    }
};

