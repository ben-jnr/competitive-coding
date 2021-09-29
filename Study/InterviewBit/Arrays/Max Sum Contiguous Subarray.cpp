int Solution::maxSubArray(const vector<int> &A) {
    int current = A[0], maxim = A[0];
    for(int i=1; i<A.size(); i++) {
        current = max(A[i], current+A[i]);
        maxim = max(maxim, current);
    }
    return(maxim);
}
