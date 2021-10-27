vector<int> Solution::getRow(int A) {
    queue<pair<int,int>> q;
    vector<int> ans;
    int sum;
    if(A==0) {
        ans.push_back(1);
        return(ans);
    }
    else {
        q.push({1,1});
        q.push({1,1});
        for(int k=2; k<=A; k++) {
            q.push({1,k});
            while(q.front().second < k) {
                sum = q.front().first;
                q.pop();
                if(q.front().second >= k)
                    break;
                sum += q.front().first;
                q.push({sum,k});
            }
            q.push({1,k});
        }
        while(!q.empty()) {
            ans.push_back(q.front().first);
            q.pop();
        }
        return(ans);
    } 
}
