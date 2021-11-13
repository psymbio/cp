class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int check_at = 0, result = 0;
        if(ruleKey.at(0) == 'c')
            check_at = 1;
        else if(ruleKey.at(0) == 'n')
            check_at = 2;
        cout << check_at;
        for(int i = 0; i < items.size(); ++i) {
                if (ruleValue.compare(items[i][check_at]) == 0)
                    result++;
        }
        return result;
    }
};
