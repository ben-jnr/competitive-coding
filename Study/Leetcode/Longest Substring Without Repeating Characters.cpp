#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
        int len=0,index,highest=0,prev=0;
        vector <int> v(256,-1);
        for(int i=0;i<s.size();i++) {
            index = int(s[i]);
            if(v[index] < prev) {
                v[index] = i;
                len++;
            }
            else {
                len = i-v[index];
                prev=v[index]+1;
                v[index]=i;
            }
            if(len>highest)
                highest = len;
        }
        cout<<highest<<"\n";
	return 0;    
}
