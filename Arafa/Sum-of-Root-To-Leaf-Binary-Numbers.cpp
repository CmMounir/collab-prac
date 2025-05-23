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
    void solve(TreeNode* root, stack<int> myStack, int& sum) {
        if(root == nullptr) return;
        if(root->left == nullptr &&  root->right == nullptr) {
            int cal = root->val;
            int mul = 2;
            while(!myStack.empty()) {
                cal += myStack.top() * mul;
                myStack.pop();
                mul = mul*2;
            }
            sum += cal;
            return;
        }

        myStack.push(root->val);
        solve(root->left, myStack, sum);
        solve(root->right, myStack, sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        stack<int> nums;
        int sum = 0;
        solve(root, nums, sum);
        return sum;
    }
};