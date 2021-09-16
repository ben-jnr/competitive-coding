#include<iostream>
#include<vector>
#define mod 1000000007
typedef long long ll;
using namespace std;

ll mul(ll a, ll b) {
	return(((a%mod)*(b%mod))%mod);
}

ll add(ll a, ll b) {
	return(((a%mod)+(b%mod))%mod);
}

ll sub(ll a, ll b) {
	return(((a%mod)-(b%mod)+mod)%mod);
}
 
 
int main() {
	ll t,tlimit,i,n,groups,trail,size,sum,ans,bracket;
	int flag;
	string s;
	t = 1;
	cin>>tlimit;
	
	while(t<=tlimit) {
		cin>>n;
		cin>>s;
		vector<ll> sizes, trailing;
		groups = trail = size = 0;
		flag = 0;
		for(i=0;i<n;i++) {
			if(s[i] == 'F') {
				trail++;
			}
			else if(s[i] == 'O') {
				if(flag == 0) {
					flag=1;
				}
				else if(flag == -1) {
					groups++;
					trailing.push_back(trail);
					sizes.push_back(size);		
					size = 0;
					flag = 1;
				}
				trail = 0;
			}
			else {
				if(flag == 0) {
					flag=-1;
				}
				else if(flag == 1) {
					groups++;
					trailing.push_back(trail);
					sizes.push_back(size);		
					size = 0;
					flag = -1;
				}
				trail = 0;	
			}	
			size++;
		}
		if(trail > 0 || size > 0) {
			groups++;
			trailing.push_back(trail);
			sizes.push_back(size);
		}
		
		sum = ans = 0;
		for(i=0; i<groups; i++)
			sum+=sizes[i];
		
		if(groups > 1) {
			bracket = 0;
			for(i=1; i<groups; i++)
				bracket = add(bracket,mul(sizes[i],i));
		
			for(i=0; i<groups-1; i++) {
				sum = sub(sum,sizes[i]);
				ans = add(ans, add(mul(sub(sizes[i],trailing[i]), bracket), mul(trailing[i],sub(bracket,sum))));
				bracket = sub(bracket,sum);
			}		
		}
		
		cout<<"Case #"<<t<<": "<<ans<<endl;
		t++;
	}
	return 0;
}
