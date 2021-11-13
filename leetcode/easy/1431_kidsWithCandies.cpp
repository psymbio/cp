class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result;
        for(auto &kid: candies) {
            if (extraCandies + kid >= *max_element(candies.begin(), candies.end()))
                result.push_back(true);
            else
                result.push_back(false);
        }
        
        return result;
    }
};
