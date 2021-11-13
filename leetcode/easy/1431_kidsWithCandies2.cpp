class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool> ans;
        int prev=*max_element(c.begin(), c.end());
        for(int x:c)
        {
            if((x+e)>=prev)
            {
                ans.emplace_back(true);
            }
            else
                ans.emplace_back(false);
        }
        return ans;
    }
};
