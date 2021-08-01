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
    int recur(TreeNode* root) {
        int k;
        if(root == NULL)
            return 0;
        
        k = recur(root->left);
        if(!k)
            root->left=NULL;
        
        k = recur(root->right);
        if(!k)
            root->right=NULL;
        
        if(root->val == 0 && root->left==NULL && root->right==NULL)
            return 0;   
        return 1;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        int k = recur(root);
        if(!k)
            return NULL;
        return root;
    }
};
