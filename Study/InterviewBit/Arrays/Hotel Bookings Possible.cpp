bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    multiset<pair<int,int>>s;
    for(int i=0; i<arrive.size(); i++) {
        s.insert({arrive[i],1});
        s.insert({depart[i],-1});
    }
    int count=0;
    for(auto u:s) {
        count += u.second;
        if(count > K)
            return(0);
    }
    return(1);
}

