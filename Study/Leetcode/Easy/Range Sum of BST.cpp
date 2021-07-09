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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return 0;
        int value = 0;
        if(root->val >= low && root->val <= high)
            value = root->val;
        return(value + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high));
    }
};
