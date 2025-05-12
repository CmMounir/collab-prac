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
    vector<string> answer;
    void solve(TreeNode* root, vector<int> result) {
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr) {
            string temp = "";
        
            for (size_t i = 0; i < result.size(); ++i) {
                
                temp += std::to_string(result[i]);
                temp += "->";
            }
            temp += std::to_string(root->val);
            answer.push_back(temp);
        }
        result.push_back(root->val);

        solve(root->left, result);
        solve(root->right, result);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> result;
        solve(root, result);
        return answer;
    }
};