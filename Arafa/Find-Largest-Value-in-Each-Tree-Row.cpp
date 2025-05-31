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
        if(root == nullptr) return {};

        queue<TreeNode*> myQueue;
        myQueue.push(root);
        myQueue.push(nullptr);

        vector<int> result;
        int max = INT_MIN;
        while(!myQueue.empty()){       
            if(myQueue.front() != nullptr) {
                if(max < myQueue.front()->val) max = myQueue.front()->val;

                if(myQueue.front()->left != nullptr) {
                    myQueue.push(myQueue.front()->left);
                }
                if(myQueue.front()->right != nullptr) {
                    myQueue.push(myQueue.front()->right);
                }
            }
            else {
                result.push_back(max);
                max = INT_MIN;
                if(myQueue.size() > 1) myQueue.push(nullptr);
            }
            myQueue.pop();
        }
        return result;
    }
};