class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, select;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(count == 0)
                select = nums[i];
            if(select == nums[i])
                count++;
            else
                count--;
        }
        return(select);
    }
};
