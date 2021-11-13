class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int temp_res = 0;
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i) {
            temp_res = 0;
            for(int j = 0; j < nums.size(); ++j)
                if(i != j) 
                    if(nums[j] < nums[i])
                        temp_res++;
            result.push_back(temp_res);   
        }
        
        return result;
    }
};

// pretty horrible solution
