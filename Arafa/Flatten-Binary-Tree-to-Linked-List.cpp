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
    TreeNode* prev = nullptr;

    void solve(TreeNode* root) {
        if (root == nullptr) return;

        // Save references before modifying them
        TreeNode* leftSubtree = root->left;
        TreeNode* rightSubtree = root->right;

        if (prev != nullptr) { // not first time
            prev->right = root;
            prev->left = nullptr;
        }
        prev = root;

        solve(leftSubtree);
        solve(rightSubtree);
    }

    void flatten(TreeNode* root) {
        solve(root);
    }
};
