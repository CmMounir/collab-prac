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
    int min = INT_MAX;
    void solve(TreeNode* root, int index) {
        if(root == nullptr) return ;
    
        if(root->left == nullptr && root->right == nullptr) {
            if(min > index) 
                min = index;
            return ;
        }
        
        solve(root->left, index+1);
        solve(root->right, index+1);
    }
    int minDepth(TreeNode* root) {
        solve(root, 1);
        return (min==INT_MAX ? 0 : min);
    }
};