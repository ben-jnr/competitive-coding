int Solution::solve(vector<int> &A, int B) {
    int sum=0,ans,i,j;
    int n=A.size();
    for(i=0; i<B; i++)
        sum +=A[i];
    ans = sum;
    i=B-1,j=n-1;
    while(j>n-1-B) {
        sum = sum - A[i] + A[j];
        ans = max(ans, sum);
        i--;
        j--;
    }
    return(ans);
}

