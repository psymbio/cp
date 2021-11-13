#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        // vector<vector<int>> profits;
        // profits.resize(prices.size());
        
        
//         for(int i = 0; i <= prices.size()-1; ++i) {
//             for(int j = i; j <= prices.size()-1; ++j) {
//                 profits[i].push_back(prices[j] - prices[i]);
//                 cout << prices[j] - prices[i] << " ";
//             }
            
//             cout << "\n";
//         }
        int result = 0;
        int profit = 0;
        
        if(prices.size()==1) return 0;
        if(prices.size()==2)
            if(prices[1] > prices[0])
                return prices[1] - prices[0];
            else
                return 0;
        for(int i = 0; i < prices.size()-1; i++) {
            if(prices[i+1] > prices[i]) {
                result += prices[i+1] - prices[i];
            }
        }
        
        return result;
    }
};
