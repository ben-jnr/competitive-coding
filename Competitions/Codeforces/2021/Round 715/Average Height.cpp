#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,i;
	cin>>t;
	while(t--) {
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) 
			cin>>a[i];
		for(i=0;i<n;i++) {
			if(a[i] % 2 == 1)
				cout<<a[i]<<" ";
		}
		for(i=0;i<n;i++) {
			if(a[i] % 2 == 0)
				cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
