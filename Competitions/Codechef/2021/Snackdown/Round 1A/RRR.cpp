#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,k;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		cout<<2*(n-1-(k/2))<<endl;
	}
	return 0;
}
