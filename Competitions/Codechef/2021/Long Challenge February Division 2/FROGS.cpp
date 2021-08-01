#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,temp,i;
	cin>>t;
	while(t--) {
		cin>>n;
		ll jump[n+1],location[n+1],order[n+1],count=0;
		for(i=1;i<n+1;i++) {
			cin>>temp;
			location[temp] = i;
			order[i] = temp;
		}
		for(i=1;i<n+1;i++)
			cin>>jump[order[i]];
		for(i=2;i<n+1;i++) {
			if(location[i]>location[i-1])
				continue;
			temp = ((location[i-1] - location[i]) / jump[i]) + 1; 
			count += temp;
			location[i] += (temp*jump[i]);
		}
		cout<<count<<endl;
	}
	return 0;
}
