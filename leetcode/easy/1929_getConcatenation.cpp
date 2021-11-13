#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> ans = nums;
        for(int x: nums)
            ans.push_back(x);
        
        return ans;
    }
};


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v(nums.size()*2);
        auto n = &nums[0];
        const int size = nums.size();
        
        for (int i = 0; i < size; ++i) {
            //v[i] = nums[i];
            v[i] = *(n + i);
        }        
        for (int i = 0; i < size; ++i) {
            //v[i + size] = nums[i];
            v[i + size] = *(n + i);
        }
        return v;
    }
};

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0; i<n; i++)
        {
         ans[i]=nums[i];
         ans[i+n]=nums[i];  
        }
            return ans;
    }
    
};
