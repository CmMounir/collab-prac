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
    bool solve(TreeNode* root, int targetSum, vector<int> nums) {
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr) {
            int sum = root->val;
            for(const auto& element: nums) {
                sum += element;
            }
            return sum == targetSum;
        }
        nums.push_back(root->val);
        bool result;
        result = solve(root->left, targetSum, nums);
        if(!result)
            result = solve(root->right, targetSum, nums);
        return result;
    }


    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> nums;
        if(root == nullptr) return false;
        return solve(root, targetSum, nums);
    }
};