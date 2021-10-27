void Solution::rotate(vector<vector<int> > &A) {
    int n = A.size();
    int temp;
    for(int i=0; i<n/2; i++) {
        for(int j=i; j<n-1-i; j++) {
            temp = A[j][n-1-i];
            A[j][n-1-i] = A[i][j];
            swap(temp, A[n-1-i][n-1-j]);
            swap(temp, A[n-1-j][i]);
            A[i][j] = temp;
        }
    }
}
