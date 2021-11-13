class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> result;
        // https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/
        
        for(int i = 0; i < nums.size(); ++i) {
            result.insert(result.begin() + index[i], nums[i]);
        }
        
        return result;
    }
};
