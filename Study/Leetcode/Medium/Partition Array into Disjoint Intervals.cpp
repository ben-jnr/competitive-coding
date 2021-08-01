class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        
        auto a=nums.begin(), b = nums.begin();
        int index=0, i=1;
        
        for(auto it=nums.begin()+1; it!=nums.end(); it++) {    
            if(*it < *a) {
                index = i;
                a = b;
            }
            else if(*it > *b)
                b = it;
            i++;
        }
        
        return index+1;
    }
};
