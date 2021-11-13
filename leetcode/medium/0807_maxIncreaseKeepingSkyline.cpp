// https://stackoverflow.com/questions/27340220/column-size-and-row-size-of-a-2d-vector-in-c

// https://www.geeksforgeeks.org/find-maximum-element-of-each-column-in-a-matrix/
class Solution {
public:
            int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            vector<int> top_bottom;
            int temp_top = 0;
            vector<int> left_right;
            int temp_left = 0;
            int max_left = 0;
            int max_top = 0;
            int result = 0;
            for (int i = 0; i < grid.size(); i++) {
                temp_left = 0;
                max_left = 0;
                temp_top = 0;
                max_top = 0;
                for(int j = 0; j < grid[0].size(); j++) {
                    temp_left = grid[i][j];
                    temp_top = grid[j][i];
                    if(temp_left > max_left)
                        max_left = temp_left;
                    if(temp_top > max_top)
                        max_top = temp_top;
                }
                top_bottom.push_back(max_top);
                left_right.push_back(max_left);
            }

            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[0].size(); j++) {
                    result += min(left_right[i], top_bottom[j]) - grid[i][j];
                }
            }
            
            return result;
        }
};
