bool comp(string &a, string &b) {
    string temp1 = a+b;
    string temp2 = b+a;
    return(temp1>temp2); 
}

class Solution {
public:    
    string largestNumber(vector<int>& A) {
        vector<string>B;
        string s="";
        for(auto u:A)
            B.push_back(to_string(u));
        sort(B.begin(), B.end(), comp);
        for(auto u:B)
            for(auto v:u)
                s.push_back(v);
        int i;
        for(i=0; s[i]!='\0';i++) {
            if(s[i] != '0')
                break;
        }
        s=s.substr(i,s.size());
        if(s=="")
            s="0";
        return(s);
    }
};
