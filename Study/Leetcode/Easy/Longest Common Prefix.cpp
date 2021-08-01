class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string s = "";
        int j = 0, flag = 1, i;
        char c;
        if(len == 1)
            return strs[0];
        while(flag) {
            if(strs[0][j] == '\0')
                flag = 0;
            else {
                c = strs[0][j];
                for(i=1;i<len;i++) {
                    if(strs[i][j] == '\0')
                        flag = 0;
                    else if(strs[i][j] != c)
                        flag = 0;
                }
                if(flag)
                    s.push_back(c);
                j++;
            }
        }
        return s;
    }
};
