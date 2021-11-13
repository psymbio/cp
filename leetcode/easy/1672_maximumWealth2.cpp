class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(auto &customer: accounts) {
            int _wealth = 0;
            for(auto _account: customer) {
                _wealth += _account;
            }
            ans = max(ans, _wealth);
        }
        return ans;
    }
};
