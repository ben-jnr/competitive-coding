class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int select1=-1, select2=-1, count1=0, count2=0;
        int n=nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == select1)
                count1++;
            else if(nums[i] == select2)
                count2++;
            else if(count1 == 0) {
                count1=1;
                select1=nums[i];
            }
            else if(count2 == 0) {
                count2=1;
                select2=nums[i];
            }
            else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=count2=0;
        for(int i=0; i<n; i++) {
            if(nums[i] == select1)
                count1++;
            else if(nums[i] == select2)
                count2++;
        }
        if(count1 > n/3)
            ans.push_back(select1);
        if(count2 > n/3)
            ans.push_back(select2);
        return(ans);
    }
};
