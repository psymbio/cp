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

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int result = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return 0;
        if(root->val >= low && root->val <= high){
            result += root->val;
        }
        rangeSumBST(root->right, low, high);
        rangeSumBST(root->left, low, high);
        
        return result;
    }
};
