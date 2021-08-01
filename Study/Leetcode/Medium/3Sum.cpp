class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> n;
        unordered_map<int,int> count;
    
        for(auto it=nums.begin(); it!= nums.end(); it++) {
            if(count.find(*it) == count.end())
                n.push_back(*it);
            count[*it]++;
        }
        

        for(auto u:count) {
            if(u.second>1) {
                if(u.first == 0) {
                    if(u.second > 2) {                    
                        vector<int> temp = {0,0,0};
                        v.push_back(temp);
                    }
                } 
                else if(count.find(-u.first-u.first) != count.end()) {
                    vector<int> temp = {u.first, u.first, -u.first-u.first};
                    v.push_back(temp);
                }
            }
        }
        
        int sum;
        sort(n.begin(), n.end());
        
        for(auto it1 = n.begin(); it1!= n.end(); it1++) {
            for(auto it2=next(it1); it2!=n.end(); it2++) {
                sum = -(*it1 + *it2);
                if(sum > *it1 && sum > *it2) {
                    if(count.find(sum) != count.end()) {
                        vector<int> temp = {*it1, *it2, sum};
                        v.push_back(temp);    
                    }
                }   
            }
        }
        
        return v;
    }
};
