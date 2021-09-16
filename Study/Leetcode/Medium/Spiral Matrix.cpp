class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i,j,border=0;
        int count = m*n;
        vector<int> ans;
        
        while(count) {
            i=border;
            j=border;
            while(j<=n-1-border && count) {
                ans.push_back(matrix[i][j]);
                j++;
                count--;
            }
            j = n-1-border;
            i++;
            while(i<=m-1-border && count) {
                ans.push_back(matrix[i][j]);
                i++;
                count--;
            }
            i = m-1-border;
            j--;
            while(j>=border && count) {
                ans.push_back(matrix[i][j]);
                j--;
                count--;   
            }
            j=border;
            i--;
            border++;
            while(i>=border && count) {
                ans.push_back(matrix[i][j]);
                i--;
                count--;   
            }
        }
        return(ans);
    }
};
