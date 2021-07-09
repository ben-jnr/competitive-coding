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
    vector<int> preorder(Node* root) {
        vector<int> v,temp;
        if(root == NULL)
            return v;
        v.push_back(root->val);
        for(auto child:root->children)
        {
            temp = preorder(child);
            v.insert(v.end(), temp.begin(), temp.end());
        }
        return v;
    }
};
