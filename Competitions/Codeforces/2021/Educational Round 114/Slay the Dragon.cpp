#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() {
	ll n,temp,m,x,y,sum,count;
	vector<ll> h;
	scanf("%lld",&n);
	sum=0;
	for(ll i=0; i<n; i++) {
		scanf("%lld",&temp);
		sum+=temp;
		h.push_back(temp);
	}
	scanf("%lld",&m);
	sort(h.begin(), h.end());
	for(ll i=0; i<m; i++) {
		scanf("%lld%lld",&x,&y);
		auto it = lower_bound(h.begin(), h.end(), x);
		if(it == h.begin()) {
			count = max((ll)0, y-(sum-*it));
		}
		else if(it == h.end()) {
			count = (x-*(it-1)) + max((ll)0, y-(sum-*(it-1)));
		}
		else {
			count = min( max((ll)0, y-(sum-*it)), (x-*(it-1)) + max((ll)0, y-(sum-*(it-1))) );		
		}
		printf("%lld\n",count);
	}
	return 0;
}
