class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size(), i;
        vector<int> even, odd, ans;
        for(int i=0; i<n; i++) {
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        for(i=0; i<n/2; i++) {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return(ans);
    }
};
