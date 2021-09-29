class Solution {
public:      
    int predict(vector<int>& nums, int i, int j, int turn) {
        if(i>j)
            return 0;
        if(turn == 1)
            return(max(nums[i]+predict(nums, i+1, j, 2), nums[j]+predict(nums, i, j-1, 2)));
        else
            return(min(predict(nums, i+1, j, 1), predict(nums, i, j-1, 1)));
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int sum=0, max1;
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        max1 = predict(nums,0,nums.size()-1,1);
        sum -= max1;
        return(max1 >= sum);
    }
};
