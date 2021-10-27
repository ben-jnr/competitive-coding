class Solution {
public:
   vector<string> v;
    
    void recur(string s, int i, int n) {
        if(n==0 && i==0)
            v.push_back(s);
        if(i < n) {
            s.push_back('(');
            recur(s, i+1, n);
            s.pop_back();
        }
        if(i>0) {
            s.push_back(')');
            recur(s,i-1,n-1);
            s.pop_back();
        }
        return;
    }
    
    vector<string> generateParenthesis(int n) {
        string s="";
        recur(s,0,n); 
        return(v);
    }
};
