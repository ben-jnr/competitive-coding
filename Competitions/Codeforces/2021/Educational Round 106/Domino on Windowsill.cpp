#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,k1,k2,w,b,cw,cb;
	cin>>t;	
	while(t--) {
		cw = cb = 0;
		cin>>n>>k1>>k2;
		cin>>w>>b;
		cw = min(k1,k2);
		cw += (max(k1,k2)-min(k1,k2))/2;
		if(cw >= w) {
			cb = min(n-k1,n-k2);
			cb += (max(n-k1,n-k2)-min(n-k1,n-k2))/2;
			if(cb>=b)
				cout<<"YES\n";
				else
					cout<<"NO\n";
		}
		else 
			cout<<"NO\n";
	}
}
