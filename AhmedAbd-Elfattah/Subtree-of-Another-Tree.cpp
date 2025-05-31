class Solution
{
private:
    bool same(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr && subRoot == nullptr)
        {
            return true;
        }
        if (root == nullptr || subRoot == nullptr)
        {
            return false;
        }

        if (root->val == subRoot->val)
        {
            return same(root->right, subRoot->right) && same(root->left, subRoot->left);
        }
        else
        {
            return false;
        }
    }

public:
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr)
        {
            return false;
        }
        bool b1 = same(root->right, subRoot);
        bool b2 = same(root->left, subRoot);
        bool b3 = same(root, subRoot);

        if (b1 || b2 || b3)
        {
            return true;
        }
        return isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);
    }
};
