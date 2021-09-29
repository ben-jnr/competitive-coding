int Solution::solve(vector<int> &A) {
    int mid, sum=0, maxim=INT_MIN;;
    set<int>a;
    deque<int>b;
    set<int>::iterator it; 
    a.insert(A[0]);
    for(int i=A.size()-1; i>=0; i--) {
        maxim = max(maxim, A[i]);
        b.push_front(maxim);
    }
    for(int i=1; i<A.size()-1; i++) {
        it = a.lower_bound(A[i]);
        if(it != a.begin() && b[i+1]>A[i]) {
            sum = max(sum, *(--it)+A[i]+b[i+1]);
        }
        a.insert(A[i]);
    }
    return(sum);
}
