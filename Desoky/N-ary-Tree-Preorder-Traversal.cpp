/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void solve_preorder(Node* root,vector<int>& vect)
{
    if(!root)
        return;
    vect.push_back(root->val);
    for(int i=0;i<root->children.size();++i)
        solve_preorder(root->children.at(i),vect);
}

vector<int> preorder(Node* root) 
{
    vector<int> result;
    if(!root)
        return result;
    solve_preorder(root,result);
    return result;
}
};