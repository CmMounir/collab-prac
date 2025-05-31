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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr){
            return res;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        res.push_back({root->val});
        while(!q.empty()){
            size_t level_size = q.size();
            vector<int> level_v;
            for (size_t i=0; i<level_size; i++){
                TreeNode* current = q.front();
                q.pop();
                if (current->left){
                    q.push(current->left);
                    level_v.push_back(current->left->val);
                }
                if (current->right){
                    q.push(current->right);
                    level_v.push_back(current->right->val);
                }
            }
            if (level_v.size())
                res.push_back(level_v);
        }
        return res;
    }
};