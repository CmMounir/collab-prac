class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return root;
        }

        std::queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            size_t levelSize = q.size();

            for (size_t i = 0; i < levelSize; i++)
            {
                TreeNode *currentNode = q.front();
                q.pop();
                std::swap(currentNode->right, currentNode->left);

                if (currentNode->right)
                {
                    q.push(currentNode->right);
                }

                if (currentNode->left)
                {
                    q.push(currentNode->left);
                }
            }
        }

        return root;
    }
};