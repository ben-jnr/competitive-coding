class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.end() - gas.begin();
        int i=0, j=0, bal=0;
        while(i<n) {
            if(j == n)
                j=0;
            bal += gas[j];
            bal -= cost[j];
            if((i==0 && j==n-1) || j==i-1) {
                if(bal >= 0)
                    return(i);
            }
            
            while(bal<0 && i<n) {
                bal -= gas[i];
                bal += cost[i];
                i++;
            }
            
            j++;
            
        }
        return(-1);
    }
};
