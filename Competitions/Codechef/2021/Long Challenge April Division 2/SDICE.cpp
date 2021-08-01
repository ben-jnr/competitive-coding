#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,q,r,sum;
	cin>>t;
	while(t--) {
		cin>>n;
		sum = 0;
		q = n/4;
		r = n%4;
		if(q > 0) {
			sum += (q-1)*44;
			if(r==0)
				sum += 60;
			else if(r==1)
				sum += 76;
			else if(r==2)
				sum += 88;
			else if(r==3)
				sum += 99;
		}
		else {
			if(r==0)
				sum += 0;
			else if(r==1)
				sum += 20;
			else if(r==2)
				sum += 36;
			else if(r==3)
				sum += 51;
		}
		cout<<sum<<endl;
	}
}
