int Solution::perfectPeak(vector<int> &A) {
    vector<int> left;
    deque<int>right;
    int n = A.size();
    left.push_back(A[0]);
    right.push_front(A[n-1]);
    int maxim = A[0], minim = A[n-1], i;
    for(i=1; i<n; i++) {
        maxim = max(maxim, A[i]);
        left.push_back(maxim);
    }
    for(i=n-2; i>=0; i--) {
        minim = min(minim, A[i]);
        right.push_front(minim);
    }
    for(i=1; i<n-1; i++) {
        if(A[i]>left[i-1] && A[i]<right[i+1])
            return(1);
    }
    return(0);
}

