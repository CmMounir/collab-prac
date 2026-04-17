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
14    vector<string> ans;
15
16    void solve(TreeNode* root, vector<int> vec){
17        if(root == nullptr) 
18            return;
19        
20        if(root->left == nullptr && root->right == nullptr) {
21            string temp = "";
22            for(int i = 0; i < vec.size(); i++) {
23                if(i == 0)
24                    temp = to_string(vec[i]);
25                else
26                    temp += "->" + to_string(vec[i]);
27            }
28            if(temp == "")
29                temp += to_string(root->val);
30            else 
31                temp += "->" + to_string(root->val);
32            ans.push_back(temp);
33            return;
34        }
35
36        vec.push_back(root->val);
37        solve(root->left, vec);
38        solve(root->right, vec);
39        vec.pop_back();
40    }
41
42    vector<string> binaryTreePaths(TreeNode* root) {
43        solve(root, {});
44
45        return ans;
46    }
47};