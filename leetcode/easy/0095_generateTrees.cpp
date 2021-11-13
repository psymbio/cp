// https://www.youtube.com/watch?v=hQn61BjdA7M

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // if we had the input 1,2,3,4,5,6,7,8,9,10
    // consider now for 5
    vector<TreeNode*> helper(int start, int end) {
        // try to return all possible trees from start to end
        vector<TreeNode*> one_possibility;
        if(start > end) {
            one_possibility.push_back(NULL);
            return one_possibility;
        }
        else if(start==end)
        {
            one_possibility.push_back(new TreeNode(start));
            return one_possibility;
        }
        
        for(int i = start; i <= end; i++) {
            //create all the vector combinations with 1,2,3,4 to the left
            vector<TreeNode*> left = helper(start, i-1);
             //create all the vector combinations with 6,7,8,9,10 to the right
            vector<TreeNode*> right = helper(i+1, end);
            // add it to one_possibility which has 5 in it
            for(TreeNode* l: left) {
                for(TreeNode* r: right) {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    one_possibility.push_back(root);
                }
            }
                    
        }
        
        return one_possibility;
    }
    vector<TreeNode*> generateTrees(int n) {
        return helper(1, n);
    }
};
