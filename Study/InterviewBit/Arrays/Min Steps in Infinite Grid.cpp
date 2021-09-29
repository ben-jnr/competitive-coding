int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i=0,count=0, maxX, maxY;
    int x=A[i], y=B[i];
    for(i=1; i<A.size(); i++) {
        maxX = max(x-A[i], A[i]-x);
        maxY = max(y-B[i], B[i]-y);
        count += max(maxX, maxY);
        x = A[i];
        y = B[i];
    }
    return(count);
}

