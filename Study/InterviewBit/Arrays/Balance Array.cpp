int Solution::solve(vector<int> &A) {
    int n=A.size(),i,etot=0,otot=0,even=0,odd=0;
    for(i=0; i<n; i++) {
        if(i%2==0)
            etot += A[i];
        else
            otot += A[i];
    }
    int count=0;
    for(i=0; i<n; i++) {
        if(i%2 == 0)
            etot -= A[i];
        else
            otot -= A[i];
        if(even + otot == odd + etot)
            count++;
        if(i%2 == 0)
            even += A[i];
        else
            odd += A[i];
    }
    return(count);
}
