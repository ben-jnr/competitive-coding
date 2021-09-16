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
    
    void recur(TreeNode* root, int targetSum, vector<vector<int>> &v, vector<int>current, int sum) {
        if(root == NULL)
            return;
        current.push_back(root->val);
        sum += root->val;
        if(sum == targetSum) {
            if(root->left == NULL && root->right == NULL) {
                v.push_back(current);
                return;
            }
        }
        recur(root->left, targetSum, v, current, sum);
        recur(root->right, targetSum, v, current, sum);
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        vector<int> current;
        int count = 0;
        recur(root, targetSum, v, current, 0);
        return v;
    }
};
