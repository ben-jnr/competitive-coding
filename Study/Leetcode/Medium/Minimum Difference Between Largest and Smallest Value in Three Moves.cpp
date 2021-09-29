class Solution {
public:
    void recur(vector<int>nums, int i, int j, int count, int &minim) {
        if(count == 0) {
            minim = min(minim, nums[i]-nums[j]);
            return;
        }
        recur(nums, i+1, j, count-1, minim);
        recur(nums, i, j-1, count-1, minim);
    }
    
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4)
            return(0);
        sort(nums.rbegin(), nums.rend());
        int i=0, j=nums.size()-1, count=3;
        int minim = INT_MAX;
        recur(nums,i,j,count,minim);
        return(minim);
    }
};


/*

Alternatively without recursion

class Solution {
public:   
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4)
            return(0);
        sort(nums.rbegin(), nums.rend());
        int i=0, j=nums.size()-1;
        int minim = min( nums[i]-nums[j-3], min(nums[i+3]-nums[j], min(nums[i+1]-nums[j-2], nums[i+2]-nums[j-1])));
        return(minim);
    }
};

*/
