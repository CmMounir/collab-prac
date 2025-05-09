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
    vector<int> p_nodes;
    vector<int> q_nodes;

    bool check(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q != nullptr) {
            return false;
        }
        if(p != nullptr && q == nullptr) {
            return false;
        }
        if(p == nullptr && q == nullptr) {
            return true;
        }
        if(p->val != q->val) {
            return false;
        }
        if(p->left == nullptr && q->left != nullptr) {
            return false;
        }
        if(p->left != nullptr && q->left == nullptr) {
            return false;
        }
        if(p->left != nullptr && q->left != nullptr && p->left->val != q->left->val) {
            return false;
        }
        if(p->right == nullptr && q->right != nullptr) {
            return false;
        }
        if(p->right != nullptr && q->right == nullptr) {
            return false;
        }
        if(p->right != nullptr && q->right != nullptr && p->right->val != q->right->val) {
            return false;
        }

        bool result = check(p->left,q->left);
        if(result == false)  { 
            return false;
        }
        result = check(p->right,q->right);
        if(result == false)  { 
            return false;
        } 
        return true;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {        
        return check(p,q);
    }
};