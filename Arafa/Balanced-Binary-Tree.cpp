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
    int calcDepth(TreeNode* root, int counter) {
        if(root == nullptr) return -1;
        if(root->left == nullptr && root->right == nullptr) return counter;
        
        int x = calcDepth(root->left, counter+1);
        int y = calcDepth(root->right, counter+1);
        return x>y ? x : y;
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;

        int x = calcDepth(root->left, 0); 
        int y = calcDepth(root->right, 0);
        if(abs(x-y) <= 1) { 
            bool res = isBalanced(root->left);
            if(res) {
                res = isBalanced(root->right);
                return res;
            }
            else 
                return false;
        }
        else 
            return false;
    }
};