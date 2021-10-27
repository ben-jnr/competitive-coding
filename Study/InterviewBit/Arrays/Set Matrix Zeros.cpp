void Solution::setZeroes(vector<vector<int> > &A) {
    unordered_set<int>cols,rows;
    for(int i=0; i<A.size(); i++) {
        for(int j=0; j<A[0].size(); j++) {
            if(A[i][j] == 0) { 
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    for(int i=0; i<A.size(); i++) {
        for(int j=0; j<A[0].size(); j++) {
            if(rows.find(i) != rows.end())
                A[i][j] = 0;
            else if(cols.find(j) != cols.end())
                A[i][j] = 0;
        }
    }
}
