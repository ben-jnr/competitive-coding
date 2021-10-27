int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> v(n,0);
    for(auto u:A) {
        v[u]++;
        if(v[u] == 2)
            return(u);
    }
}
