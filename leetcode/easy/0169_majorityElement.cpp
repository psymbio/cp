class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_int = nums[0];
        int temp_count = 1;
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] == max_int)
                temp_count++;
            else {
                if(temp_count == 0) {
                max_int = nums[i];
                temp_count++;   
                }
                else
                    temp_count--;
            }
        }
        return max_int;
    }
};
