#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll a,b,c;
		cin>>a>>b>>c;
		if(a == 7 || b == 7 || c == 7)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
