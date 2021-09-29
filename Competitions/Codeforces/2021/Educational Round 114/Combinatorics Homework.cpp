#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	int t,a,b,c,m,minim;
	cin>>t;
	while(t--) {
		cin>>a>>b>>c>>m;
		if(m > a+b+c-3) {
			cout<<"NO\n";
			continue;
		}
		else {
			if(a > b+c+1)
				minim = a-(b+c+1);
			else if(b > a+c+1)
				minim = b-(a+c+1);
			else if(c > a+b+1)
				minim = c-(a+b+1);
			else
				minim=0;
			if(m < minim) {
				cout<<"NO\n";
				continue;
			}
			
		}	
		cout<<"YES\n";
	}
	return 0;
}
