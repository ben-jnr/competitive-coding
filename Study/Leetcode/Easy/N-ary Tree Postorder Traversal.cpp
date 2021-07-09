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
    vector<int> postorder(Node* root) {
        vector<int> v,temp;
        if(root == NULL)
            return v;
        for(auto child:root->children)
        {
            temp = postorder(child);
            v.insert(v.end(), temp.begin(), temp.end());
        }
        v.push_back(root->val);
        return v;
    }
};
