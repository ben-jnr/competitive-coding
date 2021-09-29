vector<int> Solution::solve(vector<int> &A) {
    int index = -1;
    vector<int> B;
    for(int i=0; i<A.size(); i++) {
        if(A[i] >= 0) {
            index = i;
            break;
        }
    }
    if(index == -1)
        index = A.size()-1;
    int i=index, j=index-1;
    while(i<A.size() && j>=0) {
        if(A[i]*A[i] < A[j]*A[j]) {
            B.push_back(A[i]*A[i]);
            i++;
        }
        else {
            B.push_back(A[j]*A[j]);
            j--;
        }
    }
    while(i<A.size()) {
        B.push_back(A[i]*A[i]);
        i++;
    }
    while(j>=0) {
        B.push_back(A[j]*A[j]);
        j--;
    }
    return(B);
}

