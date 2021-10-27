#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,x,k;
	cin>>t;
	while(t--) {
		cin>>x>>k;
		cout<<x*2<<" "<<(x*k)*((x*k)-1)<<endl;
	}
	return 0;
}
