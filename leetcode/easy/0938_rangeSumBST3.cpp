#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

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
