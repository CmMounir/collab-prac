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
vector<vector<int>> levelOrder(TreeNode* root)
{
    vector<vector<int>> result;
    if(root == nullptr)    //if tree is empty return empty
        return result;
    queue<TreeNode*> temp_queue;
    temp_queue.push(root); //initially push the root in the queue
    while(!temp_queue.empty())  //while the queue is not empty, queues are used to store the next level of nodes
    {
        vector<int> vect;
        int queue_size = temp_queue.size(); //current size of the queue, number of elements of the current level
        for(int i=0;i<queue_size;++i)
        {
            TreeNode* node = temp_queue.front();    //check if the leafs of that node are not empty, enqueue them to the next round/level
            temp_queue.pop();
            if(node->left != nullptr)   //if the left leaf is not empty, take it
                temp_queue.push(node->left);
            if(node->right != nullptr)  //if the right leaf is not empty, take it
                temp_queue.push(node->right);
            vect.push_back(node->val);  //store the current node that i'm checking its childs to the vector
        }
        result.push_back(vect);
    }
    return result;
}
};