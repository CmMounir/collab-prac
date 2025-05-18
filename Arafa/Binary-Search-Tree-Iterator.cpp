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
class BSTIterator {
public:
    vector<int> myVec;
    int index = 0;
    void solve(TreeNode* root) {
        if(root == nullptr) return;

        solve(root->left);
        myVec.push_back(root->val);
        solve(root->right);
    }

    BSTIterator(TreeNode* root) {
        solve(root);
    }
    
    int next() {
        int result;
        if(index < myVec.size()) {
            result = myVec[index];
            index++;
        }

        return result;
    }
    
    bool hasNext() {
        bool result = false;
        if(index < myVec.size()) {
            result = true;
        }
        return result;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */