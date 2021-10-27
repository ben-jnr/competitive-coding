#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,temp;
		cin>>n;
		set<pair<int,int>> s;
		unordered_set<int> used;
		for(int i=0; i<n; i++) {
			cin>>temp;
			s.insert({temp,i});
		}
		ll track=0;
		ll a[n];
		for(auto u:s) {
			if(used.find((u.first+track)%u.first) == used.end()) {
				a[u.second] = u.first+track;
				used.insert(track);
				track++;
			}
			else {
				a[u.second] = u.first;
			}
		}
		for(auto u:a)
			cout<<u<<" ";
		cout<<endl;
	}
	return 0;
}
