#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() {
	ll t, tlimit, i;
	cin>>tlimit;
	t=1;
	while(t<=tlimit) {
		ll n;
		string s;
		cin>>n;
		cin>>s;
		ll ans = 0;
		vector<ll> v;
		for(i=0; s[i]!='\0'; i++)
			if(s[i] == '1')
				v.push_back(i);
		vector<ll>::iterator it;
		for(i=0; s[i]!='\0'; i++) {
			if(s[i] == '0') {
				it = upper_bound(v.begin(), v.end(), i);
				if(it == v.end())
					ans += i-*(it-1);
				else if(it == v.begin())
					ans += *it-i;
				else 
					ans += min(*it-i, i-*(it-1));
			}
		}
		cout<<"Case #"<<t<<": "<<ans<<endl;
		t++;		
	}
	return 0;
}
