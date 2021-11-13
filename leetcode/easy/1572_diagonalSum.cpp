class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int result = 0;
        for (int i = 0; i <= mat.size()-1; i++) {
            for(int j = 0; j <= mat[i].size()-1; j++) {
                if(i == j && i+j == mat[i].size()-1)
                    result += mat[i][j];
                else if(i == j)
                    result += mat[i][j];
                else if(i+j == mat[i].size()-1)
                    result += mat[i][j];
                else
                    continue;
            }
        }
        
        return result;
    }
};
