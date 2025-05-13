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
    vector<int> myVec;
    void solve(TreeNode* root) {
        if(root == nullptr) return;

        solve(root->left);
        myVec.push_back(root->val);
        solve(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        solve(root);
        TreeNode* head = nullptr;
        TreeNode* helper = nullptr;
        TreeNode* last = nullptr;
        for(const auto& element : myVec){
            if(head == nullptr) {
                helper = new TreeNode(element);
                head = helper;
                last = helper;
            }
            else {
                helper = new TreeNode(element);
                last->right = helper;
                last = helper;
            }
        }
        return head;
    }
};