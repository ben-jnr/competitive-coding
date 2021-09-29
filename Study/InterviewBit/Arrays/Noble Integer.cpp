int Solution::solve(vector<int> &A) {
    map<int,int>m;
    int count=0;
    for(int i=0; i<A.size(); i++) {
        m[A[i]]++;
        count++;
    }
    for(auto u:m) {
        if(u.first == count-u.second)
            return(1);
        count = count-u.second;
    }
    return(-1);
}

