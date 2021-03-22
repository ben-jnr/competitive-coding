#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,k,i;
	int flag;
	string s;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		cin>>s;
		if(k == 0)
			cout<<"YES\n";
		else {
			flag = 1;
			for(i = 0; i<n/2; i++) {
				if(s[i] != s[n-1-i]) {
					flag = 0;
					break;
				}
				if(i == k-1)
					break;
			}	
			if(flag == 0)
				cout<<"NO\n";
			else if(n == 2*k)
				cout<<"NO\n";
			else
				cout<<"YES\n";
		}
	}
	return 0;
}
