class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX, b=INT_MAX;
        for(auto u:nums) {
            if(u <= a)
                a=u;
            else if(u <= b)
                b=u;
            else
                return(true);       
        }
        return(false);
    }
};
