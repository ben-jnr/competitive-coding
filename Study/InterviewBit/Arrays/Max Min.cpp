int Solution::solve(vector<int> &A) {
    int minim=INT_MAX, maxim=INT_MIN;
    for(int i=0; i<A.size(); i++ ){
        maxim = max(A[i], maxim);
        minim = min(A[i], minim);
    }
    return(maxim+minim);
}

