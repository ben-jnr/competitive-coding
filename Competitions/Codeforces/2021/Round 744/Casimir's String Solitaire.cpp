#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		ll a,b,c;
		a=b=c=0;
		for(int i=0;s[i]!='\0';i++) {
			if(s[i]=='A')
				a++;
			else if(s[i]=='B')
				b++;
			else
				c++;
		}
		if(b == a+c)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
