class Solution {
private:
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        if (root == nullptr) return ans;
        if (root->val <= high && root->val >= low) ans += root->val;
        ans += rangeSumBST(root->left, low, high);
        ans += rangeSumBST(root->right, low, high);
        root->left = root->right = nullptr;
        return ans;
    }
};
