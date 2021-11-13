class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> nums3(nums.begin(), nums.end());
        vector<int> nums2(nums3.begin(), nums3.end());
        if(nums2.size() == 0)
            return 0;
        if(nums2.size() == 1)
            return nums[0];
        if(nums2.size() == 2){
            if (nums2[0] > nums2[1])
                return nums2[0];
            else
                return nums2[1];
        }
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        for (int i = 0; i < nums2.size(); ++i) {
            if(nums2[i] > first) {
                third = second;
                second = first;
                first = nums2[i];
            } else if(nums2[i] > second && nums2[i] != first) {
                third = second;
                second = nums2[i];
            } else if (nums2[i] > third && nums2[i] != second){
                third = nums2[i];   
            }
        }
        /*
        if (third == INT_MIN && second == INT_MIN){
            return first;
            cout << "here";
        }
        else if(third == INT_MIN) {
         return second;
            cout << "here2";
        }*/
        cout << "here3";
        return third;
        
    }
};
