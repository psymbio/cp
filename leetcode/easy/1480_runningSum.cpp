class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        int add = 0;
        for (int i = 1; i < nums.size(); ++i) {
            add = 0;
            for (int j = i; j >= 0; --j) {
                add += nums[j];
            }
            result.push_back(add);
        }
        return result;
    }
};
