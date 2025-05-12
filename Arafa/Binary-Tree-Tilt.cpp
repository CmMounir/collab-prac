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
    int sum(TreeNode* root) {
        if(root == nullptr) return 0;

        if(root->left == nullptr && root->right == nullptr) 
            return root->val;

        int x = sum(root->left);
        int y = sum(root->right);

        return root->val + x +y;
    }

    int tilt(TreeNode* root) {
        if(root == nullptr) return 0;

        int x = sum(root->left);
        int y = sum(root->right);
        
        return abs(x-y);
    }

    void solve(TreeNode* root, int& result) {
        if(root == nullptr) return;
        
        result += tilt(root);
        
        solve(root->left, result);
        solve(root->right, result);
    }

    int findTilt(TreeNode* root) {
        int result = 0;
        solve(root, result);
        return result;
    }
};