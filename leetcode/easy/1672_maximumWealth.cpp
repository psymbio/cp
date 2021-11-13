class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0, temp_max = 0;
        for(int i = 0; i < accounts.size(); ++i) {
            temp_max = 0;
            for(int j = 0; j < accounts[i].size(); ++j) {
                temp_max += accounts[i][j];
            }
            
            if(temp_max > max) {
                max = temp_max;
            }
        }
        
        return max;
    }
};
