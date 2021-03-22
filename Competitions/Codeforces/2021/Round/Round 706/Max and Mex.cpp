#include<iostream>
#include<map>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,k,i,temp,prev,max,mex;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		map<ll,int> m;
		for(i=0;i<n;i++) {
			cin>>temp;
			m.insert({temp,1});
		}
		int flag = 1;
		prev = m.begin()->first;
		if(prev != 0) {
			mex = 0;
			flag = 0;
		}
		for(auto u:m) {
			max = u.first;
			if(flag && max > prev+1) {
				flag = 0;
				mex = prev + 1;
			}
			prev = max;
		}
		if(flag) {
			mex = max + 1;
			n = n + k;
		}
		else if(m.find((mex + max + 1) / 2) == m.end() && k>0)
			n++;

		cout<<n<<"\n";		
	}
	return 0;
}
