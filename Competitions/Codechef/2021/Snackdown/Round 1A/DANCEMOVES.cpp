#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,x,y,count;
	cin>>t;
	while(t--) {
		cin>>x>>y;
		count = 0;
		if(x > y) {
			count = x-y;	
		}
		else if(x < y) {
			count += (y-x)/2;
			if((y-x)%2 == 1)
				count+=2;
		}	
		cout<<count<<endl;
	}
	return 0;
}
