vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(), start=-1, carry=0;
    vector<int> v;
    
    for(int i=0; i<n; i++) {
        if(A[i] != 0) {
            start = i;
            break;
        }
    }
  
    if(A[n-1] == 9) {
        v.push_back(0);
        carry = 1;
    }
    else
        v.push_back(A[n-1]+1);
    
    for(int i=n-2; i>=0; i--) {
        if(A[i] == 9 && carry) {
            v.push_back(0);
            carry=1; 
        }
        else if(carry) {
            v.push_back(A[i]+carry);
            carry=0;
        }
        else if(i>=start)
            v.push_back(A[i]);
        else
            break;
    }
    if(carry)
        v.push_back(1);
    reverse(v.begin(), v.end());
    return(v);
}
