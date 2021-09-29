class Solution {
public:
    int reachNumber(int target) {
        int i, sum=0;
        if(target < 0)
            target = target * -1;
        for(i=0; ; i++) {
            sum += i;
            if(sum>=target && (sum-target)%2==0 )
                break;
        }
        return(i);
    }
};
