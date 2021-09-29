class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0,tempSum,diff=INT_MAX,i,j,k;
        vector<int> v = nums;
        sort(v.begin(), v.end());
        for(i=0; i<v.size()-2; i++) {
            j=i+1;
            k=v.size()-1;
            while(j<k) {
                tempSum = v[i] + v[j] + v[k];
                if(tempSum == target)
                    return tempSum;
                else if(tempSum > target) {
                    if(tempSum-target<diff) {
                        diff=tempSum-target;
                        sum = tempSum;
                    }
                    k--;
                }
                else {
                    if(target-tempSum<diff) {
                        diff=target-tempSum;
                        sum = tempSum;
                    }
                    j++;    
                }
            }
        }
        return(sum);   
    }
};
