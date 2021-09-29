class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count=0, flag=0, maxCount=0;
        if(arr.size() == 1)
            count=1;
        for(int i=0; i<arr.size()-1; i++) {
            if(arr[i]>arr[i+1] && flag==-1) {
                count++;
                flag=1;
            }
            else if(arr[i]<arr[i+1] && flag==1) {
                count++;
                flag=-1;
            } 
            else {
                maxCount = max(maxCount,count);
                count=2;
                if(arr[i]>arr[i+1])
                    flag=1;
                else if(arr[i]<arr[i+1])
                    flag=-1;
                else {
                    flag=0;
                    count=1;
                }
            }
        }
        maxCount = max(maxCount,count);
        return(maxCount);
    }
};
