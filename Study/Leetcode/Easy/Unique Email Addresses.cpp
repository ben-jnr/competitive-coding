class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        string temp;
        int flag;
        for(auto u:emails) {
            temp="";
            flag=0;
            for(auto v:u) {
                if(!flag) {
                    if(v == '+')
                        flag=1;
                    else if(v == '@') {
                        flag=2;
                        temp.push_back(v);
                    }
                    else if(v != '.')
                        temp.push_back(v);                   
                }
                else if(flag == 2) {
                    temp.push_back(v); 
                }
                else {
                    if(v == '@') {
                        flag=2;
                        temp.push_back(v);
                    }
                }
            }
            s.insert(temp);
        }
        return(s.size());
    }
};
