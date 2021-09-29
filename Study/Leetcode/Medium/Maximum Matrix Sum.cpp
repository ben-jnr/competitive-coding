class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int minim=INT_MAX;
        int count=0;
        long long sum=0;
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[0].size(); j++) {
                if(matrix[i][j] < 0) {
                    matrix[i][j]*=-1;
                    count++;
                }
                sum += matrix[i][j];
                minim = min(minim, matrix[i][j]);
            }
        }
        if(count%2==0)
            return(sum);
        else
            return(sum-(2*minim));
    }
};
