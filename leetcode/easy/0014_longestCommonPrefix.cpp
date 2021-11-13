class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prev = strs[0], common_curr = strs[0];
        int j = 0;
        for(int i = 1; i <= strs.size()-1; i++) {
            j = 0;
            common_prev = common_curr;
            common_curr = "";
            while(strs[i][j]) {
                if(common_prev[j] == strs[i][j]) {
                    common_curr += strs[i][j];
                    j++;
                }
                else
                    break;
            }
        }
        
        return common_curr;
    }
};
