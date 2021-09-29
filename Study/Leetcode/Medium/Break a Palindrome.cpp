class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        int i;
        if(n == 1) 
            return("");
        for(i=0; i<=n/2-(n%2); i++) {
            if(palindrome[i]!='a') {
                palindrome[i]='a';
                return(palindrome);
            }
        }
        palindrome[n-1]='b';
        return(palindrome);
    }
};
