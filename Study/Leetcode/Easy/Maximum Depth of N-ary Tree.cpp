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
    
    int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        else
        {
            int maxCount = 0;
            for(auto child:root->children)
                maxCount = max(maxCount, maxDepth(child)); 
            return maxCount+1;
        }        
    }
};
