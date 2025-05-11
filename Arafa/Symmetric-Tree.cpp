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
    bool check(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr && q != nullptr) return false;
        if(p != nullptr && q == nullptr) return false;
        if(p->val != q->val) return false;
        if(p->left != nullptr && q->right == nullptr) return false;
        if(p->left == nullptr && q->right != nullptr) return false;
        if(p->right != nullptr && q->left == nullptr) return false;
        if(p->right == nullptr && q->left != nullptr) return false;
        if(p->left != nullptr && q->right != nullptr && p->left->val != q->right->val) return false;
        if(p->right != nullptr && q->left != nullptr && p->right->val != q->left->val) return false;
        
        bool result = check(p->left, q->right);
        if(result)
            result = check(p->right, q->left);
        return result;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        
        return check(root->left, root->right);
    }
};