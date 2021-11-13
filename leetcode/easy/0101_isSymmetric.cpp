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
    bool isEqual(vector<int> &v1, vector<int> &v2)
    {
        return (v1.size() == v2.size() &&
                equal(v1.begin(), v1.end(), v2.begin()));
    }

    vector<int> returnTraversal(TreeNode* root, vector<int> &result) {
        if(root == NULL)
            return result;
        returnTraversal(root->left, result);
        result.push_back(root->val);
        returnTraversal(root->right, result);
        return result;
    }
    vector<int> returnTraversal2(TreeNode* root, vector<int> &result) {
        if(root == NULL)
            return result;
        returnTraversal(root->right, result);
        result.push_back(root->val);
        returnTraversal(root->left, result);
        return result;
    }
    bool isSymmetric(TreeNode* root) {
        //  create two vectors one for right and one for left
        // and then see if the vectors are equal
        
        vector<int> result1, result2;
        cout << root->val << "\n"; 
        result1 = returnTraversal(root->left, result1);
        result2 = returnTraversal2(root->right, result2);
        for(auto x: result1)
            cout << x << " ";
        cout << "\n";
        for(auto x: result2)
            cout << x << " ";
        if(isEqual(result1, result2)) return true;
        return false;
    }
};


// doesn't work
