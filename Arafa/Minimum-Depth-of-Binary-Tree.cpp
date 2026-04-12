1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int ans = INT_MAX;
15
16    void traverse(TreeNode* root, int counter) {
17        if(root == nullptr) {
18            return;
19        }
20
21        if(root != nullptr && root->left == nullptr && root->right == nullptr) {
22            if(ans > counter) {
23                ans = counter;
24            }
25            return;
26        }
27
28        traverse(root->left, counter+1);
29        traverse(root->right, counter+1);
30    }
31
32    int minDepth(TreeNode* root) {
33        traverse(root, 1);
34        return ans==INT_MAX?0:ans;
35    }
36};