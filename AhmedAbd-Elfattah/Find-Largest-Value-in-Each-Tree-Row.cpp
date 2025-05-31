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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if (root == nullptr){
            return result;
        }

        std::queue<TreeNode*> q;
        result.push_back(root->val);

        q.push(root);

        while (!q.empty())
        {
            int level_size = q.size();
            int MAX_VAL_LEVEL = INT_MIN;
            bool flag = false;
            for (size_t i=0; i<level_size; i++){
                TreeNode* current = q.front();
                q.pop();
                if (current->left){
                    flag=true;
                    MAX_VAL_LEVEL = std::max(MAX_VAL_LEVEL, current->left->val);
                    q.push(current->left);
                }
                if (current->right){
                    flag=true;
                    q.push(current->right);
                    MAX_VAL_LEVEL = std::max(MAX_VAL_LEVEL, current->right->val);
                }
            }
            if (flag==true){
                result.push_back(MAX_VAL_LEVEL);
            }
        }
        return result;
    }
};