class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        set<int>s1={nums.begin(),nums.end()};
        int small=0;
        vector<pair<int,int>> vec1;
        for(auto it:s1)
        {
            vec1.push_back({it,small});
            int cnt=count(nums.begin(),nums.end(),it);
            small=small+cnt;
        }
        
        vector<int>vec2;
        for(int i=0; i<nums.size(); i++)
        {
            int num=nums[i];
            int ha=0;
            for(int j=0; j<vec1.size(); j++)
                if(num==vec1[j].first){ha=vec1[j].second; break;}                
            vec2.push_back(ha);
        }
        return vec2;
    }
};
