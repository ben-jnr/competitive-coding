#include<iostream>
#include<limits.h>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,i,highest,lowest,temp;
	cin>>t;
	while(t--) {
		highest = LLONG_MIN;
		lowest = LLONG_MAX;
		cin>>n;
		for(i=0;i<n;i++) {
			cin>>temp;
			highest = max(highest,temp);
			lowest = min(lowest,temp);	
		}
		cout<<(2*highest) - (2*lowest)<<endl;
	}
	return 0;
}
