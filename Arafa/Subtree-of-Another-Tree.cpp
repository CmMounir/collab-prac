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
    bool solve(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot != nullptr) return false; 
        if(root != nullptr && subRoot == nullptr) return false; 
        if(root == nullptr && subRoot == nullptr) return true;
        if(root->val != subRoot->val) return false;

        if(root->left == nullptr && subRoot->left != nullptr) return false;
        if(root->left != nullptr && subRoot->left == nullptr) return false;
        if(root->left != nullptr && subRoot->left != nullptr) {
            if(root->left->val != subRoot->left->val) return false;
        }

        if(root->right == nullptr && subRoot->right != nullptr) return false;
        if(root->right != nullptr && subRoot->right == nullptr) return false;
        if(root->right != nullptr && subRoot->right != nullptr) {
            if(root->right->val != subRoot->right->val) return false;
        }

        bool x = solve(root->left, subRoot->left);
        if(!x) return x;
        bool y = solve(root->right, subRoot->right);
        return y;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr) {
            if(subRoot == nullptr) return true;
            return false;
        }

        bool x = solve(root,subRoot);
        if(x) return true;

        bool y = isSubtree(root->left,subRoot);
        if(y) return y;

        bool z = isSubtree(root->right,subRoot);
        return z;
    }
};