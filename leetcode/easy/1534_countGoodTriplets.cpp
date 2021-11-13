#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int result = 0;
        for(int i = 0; i < arr.size(); ++i) {
            for(int j = i+1; j < arr.size(); ++j) {
                if(abs(arr[i] - arr[j]) <= a) {                
                    for(int k = j+1; k < arr.size(); ++k) {
                        if(abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) result++;
                }
                }
            }
        }
        
        return result;
    }
};
