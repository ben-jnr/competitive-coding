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
    
    int sum = 0;
    
    int findTilt(TreeNode* root) {
        int temp = DFS(root);
        return sum;
    }
    
    int DFS(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 0;
        int left = 0, right = 0;
        if(root -> left == NULL)
            right = root->right->val + DFS(root->right);
        else if(root -> right == NULL)
            left = root->left->val + DFS(root->left);
        else
        {
            left = (root->left->val + DFS(root->left));
            right = (root->right->val + DFS(root->right)); 
        }
        
        sum += max(left-right, right-left);
        return(left + right);
    }
};
