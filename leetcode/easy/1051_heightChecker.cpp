class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights_sorted = heights;
        sort(heights_sorted.begin(), heights_sorted.end());
        int result = 0;
        for (int i = 0; i < heights.size(); ++i)
            if(heights[i] != heights_sorted[i])
                result++;
        return result;
    }
};
