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
    void solve(TreeNode* root, int index, int &max) {
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr) {
            if(max < index) max = index; 
            return;
        }

        solve(root->left, index+1, max);
        solve(root->right, index+1, max);
    }
    int maxDepth(TreeNode* root) {
        int max = 0;
        solve(root, 1, max);
        return max;
    }
};