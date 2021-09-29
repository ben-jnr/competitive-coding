int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int next=B-1, prev=0, count=0;
    if(next >= n-1) {
        next=n-1;
    }
    while(next >= prev && next <= n-1) {
        if(A[next]) {
            count++;
            if(next+B-1 >= n-1) {
                next = n;
                break;
            }
            prev = next+1;
            next = next+B+B-1;
            if(next > n-1) {
                next=n-1;
            }
        }
        else {
            next--;
        }
    }
    if(next <= n-1)
        return(-1);
    return(count);
}
