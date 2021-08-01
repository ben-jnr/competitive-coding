#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {
	ll i,j,t,n,k,sum,flag,a,b;
	cin>>t;
	for(i=0;i<t;i++) {
		cin>>n>>k;
		ll h[n];
		set<ll> s;
		set<ll> snew;
		for(j=0;j<n;j++)
			cin>>h[j];
		sort(h,h+n, greater<int>());
		s.insert(0);
		flag = sum = 0;
		for(j=0;j<n;j++) {
			set<ll>::iterator end = s.end();
			end--;
			set<ll>::iterator l = s.begin();
			sum += h[j];
			snew = s;
			while(1) {
				if((*l+h[j] >= k) && (sum-*l-h[j] >= k)){
					flag = 1;
					break;
				}
				if(*l < k) {
					snew.insert(*l + h[j]);
				} 	 
				if(l == end)
					break;
				l++;
			}
			if(flag) {	
				cout<<j+1<<endl;
				break;
			}
			s = snew;
		}
		
		if(!flag)
			cout<<-1<<endl;
	}
	return 0;
}
