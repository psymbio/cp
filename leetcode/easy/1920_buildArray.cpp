class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int i = nums.size()-1; i >= 0; --i) {
            result.push_back(nums[nums[i]]);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> result;
        for(int i = 0; i <= nums.size()-1; ++i) {
            result.push_back(nums[nums[i]]);
        }
        return result;
    }
};
