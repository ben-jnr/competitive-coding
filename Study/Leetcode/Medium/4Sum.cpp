class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int a,b,c,d,tempSum;
        vector<int>v = nums;
        vector<vector<int>>ans;
        sort(v.begin(), v.end());
        for(a=0; a<v.size()-1; a++) {
            if(a && v[a] == v[a-1])
                    continue;
            for(b=a+1; b<v.size(); b++) {
                if(b>a+1 && v[b] == v[b-1])
                    continue;
                c = b+1;
                d = v.size()-1;
                while(c<d) {
                    if(c>b+1 && v[c] == v[c-1]) {
                        c++;
                        continue;
                    }
                    else if(d<v.size()-1 && v[d] == v[d+1]) {
                        d--;
                        continue;
                    }
                    else if((long long)(v[a]+v[b])+(long long)(v[c]+v[d]) > (long long)INT_MAX) {
                        d--;
                        continue;
                    }
                    tempSum = v[a]+v[b]+v[c]+v[d];
                    if(tempSum < target)
                        c++;
                    else if(tempSum > target)
                        d--;
                    else {
                        vector<int>quad = {v[a],v[b],v[c],v[d]};
                        ans.push_back(quad);
                        c++;
                    }
                }
            }
        }
        return(ans);
    }
};
