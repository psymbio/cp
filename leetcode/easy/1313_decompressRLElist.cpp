class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i) {
            if(i % 2 == 0){
                for(int j = 0; j < nums[i]; ++j){
                    result.push_back(nums[i+1]);
                }
            }
        }
        
        return result;
    }
};
