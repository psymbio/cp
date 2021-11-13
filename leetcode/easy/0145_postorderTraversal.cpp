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
    void inorder(TreeNode* root, vector<int> &result) {
        if(root == NULL) {
            // cout << "came here ";
            return;
        } else {
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
        //result.push_back(root->val);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        // inorder is left root then right
        vector<int> result;
        inorder(root, result);
        return result;
    }
};
