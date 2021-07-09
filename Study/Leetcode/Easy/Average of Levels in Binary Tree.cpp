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
    
    int maxLevel = -1;
    vector<double> sum;
    vector<int> n;
    
    vector<double> averageOfLevels(TreeNode* root) {
        int count = 0;
        if(root == NULL)
            return(sum);
        DFS(root, count);
        for(int i=0;i<=maxLevel;i++)
            sum[i] = sum[i]/n[i];
        return(sum);
    }
    
    void DFS(TreeNode *root,int count)
    {
        if(root == NULL)
            return;
        if(count > maxLevel)
        {
            maxLevel = count;
            sum.push_back(0);
            n.push_back(0);
        }
        sum[count] += root->val;
        n[count]++;
        DFS(root->left, count+1);
        DFS(root->right, count+1);
    }
};
