int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size(), i=0;
    if(n == 1 && A[0] == 1)
        return(2);
    if(n == 1 && (A[0] <= 0 || A[0] > 1))
        return(1);
    while(i<n) {
        if(A[i]<0 || A[i]>n) {
            A[i] = 0;
            i++;
        }
        else if(A[i]==i) {
            i++;
        }
        else {
            if(A[i] == A[A[i]]) {
                A[i]=0;
                i++;
            }
            else
                swap(A[i], A[A[i]]);
        }
    }
    for(i=1; i<n; i++) 
        if(A[i] == 0)
            return(i);
    return(n+1); 
}
