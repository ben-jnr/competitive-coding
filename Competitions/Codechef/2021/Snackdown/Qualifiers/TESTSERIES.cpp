#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		int r,ind,eng;
		ind = eng = 0;
		for(int i=0; i<5; i++) {
			cin>>r;
			if(r == 1)
				ind++;
			else if(r == 2)
				eng++;
		}
		if(ind == eng)
			cout<<"DRAW\n";
		else if(ind > eng)
			cout<<"INDIA\n";
		else
			cout<<"ENGLAND\n";
	}
	return 0;
}
