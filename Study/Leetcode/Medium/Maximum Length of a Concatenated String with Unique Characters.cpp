class Solution {
public:    
    
    void knapsack(vector<string>arr, int i, int select, int count, int &ans) {
        int initialSelect = select;
        if(i == arr.size()) {
            if(count > ans)
                ans = count;
            return;
        }
        int flag=1, temp=0, tempCount=0, index, val;
        for(int j=0; j<arr[i].size(); j++) {
            index = (int)arr[i][j] - 97;
            val = 1<<index;
            if((temp | val) == temp) {
                flag=0;
                break;
            }
            else if((select | val) == select) {
                flag=0;
                break;
            }
            else {    
                temp = temp | val;
                tempCount++;
            }
        }
        if(flag) {
            select = select | temp;
            count+=tempCount;
            knapsack(arr, i+1, select, count, ans);
            count-=tempCount;
            select = initialSelect;
        }
        knapsack(arr, i+1, select, count, ans);
    }
    
    int maxLength(vector<string>& arr) {
        int i=0, select=0, ans=0, count=0;
        knapsack(arr,i,select,count,ans);
        return(ans);
    }
};
