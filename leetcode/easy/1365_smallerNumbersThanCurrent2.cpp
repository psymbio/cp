
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=100;i++){
            freq[i]+=freq[i-1];
        }
        
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(0);
                continue ;
            }
            v.push_back(freq[nums[i]-1]);
        }
        
        return v;
        
    }
};
