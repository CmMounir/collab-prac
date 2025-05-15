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
 int value;
bool first_value = false;
class Solution {
public:
int uni_value;
bool exit_flag = false;
void inorder_traversal(TreeNode* root)
{
    if(exit_flag)   //exit all flag is raised
        return;
    if(root == nullptr)
        return;
    inorder_traversal(root->left);
    if(root->val != uni_value)
    {
        exit_flag = true;
        return;
    }
    inorder_traversal(root->right);
}

bool isUnivalTree(TreeNode* root) 
{
    if(root == nullptr)
        return true;
    uni_value = root->val;
    inorder_traversal(root);
    return !exit_flag;  //if exit flag raised so it is not univalued, if not sot it is univalued
}
};