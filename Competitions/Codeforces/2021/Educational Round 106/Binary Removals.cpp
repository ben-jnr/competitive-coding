#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,i;
	char flag;
	string s;
	cin>>t;
	while(t--) {
		cin>>s;
		flag = '0';
		for(i=0;s[i] != '\0';i++) {
			if(s[i] != flag) {
				if(s[i+1] == '\0' || s[i+1] == flag)  
					continue;
				else {
					if(flag == '0')
						flag='1';
					else {
						cout<<"NO\n";		
						break;
					}
				}
			}	
		}
		if(s[i] == '\0')
			cout<<"YES\n";
	}
}
