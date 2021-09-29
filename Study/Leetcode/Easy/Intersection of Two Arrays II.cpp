class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto u:nums1) 
            m[u]++;
        for(auto u:nums2) {
            if(m.find(u) != m.end() && m[u] > 0) {
                ans.push_back(u);
                m[u]--;
            }
        }
        return(ans);
    }
};
