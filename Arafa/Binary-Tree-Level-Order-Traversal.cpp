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
    void helper(TreeNode* root, queue<TreeNode*> &myQueue, vector<int>& temp) {
        if(root != nullptr) {
            temp.push_back(root->val);
            
            if(root->left != nullptr) 
                myQueue.push(root->left);
            
            if(root->right != nullptr) 
                myQueue.push(root->right);  
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> myQueue;
        
        myQueue.push(root);
        while(!myQueue.empty()) {
            int levelSize = myQueue.size();
            vector<int> temp;

            for (int i = 0; i < levelSize; ++i) {
                helper(myQueue.front(), myQueue, temp);
                myQueue.pop();
            }

            result.push_back(temp);
        }

        return result;
    }
};