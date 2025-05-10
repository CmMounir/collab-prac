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
bool isSymmetric(TreeNode* root) 
{
    if(!root)   //if root is null
        return true;
    queue<pair<TreeNode*,TreeNode*>> quu;
    quu.push(pair<TreeNode*,TreeNode*>{root->left,root->right});
    while(!quu.empty())
    {
        TreeNode* left = quu.front().first;
        TreeNode* right = quu.front().second;
        quu.pop();
        if(!left && !right) //if both the nodes to compare are nullptr
            continue;
        if(!left || !right || left->val != right->val)  //if one of the nodes is nullptr or different value. symmetry is broken
            return false;
        quu.push(pair<TreeNode*,TreeNode*>{left->left,right->right});
        quu.push(pair<TreeNode*,TreeNode*>{left->right,right->left});
    }
    return true;
}
};