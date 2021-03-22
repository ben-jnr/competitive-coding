#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,i,temp;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<ll> v;
		for(i=0;i<n;i++) {
			v.push_back(i);
			cin>>temp;
			while(i-temp+1 <= v.back() && !v.empty())	
				v.pop_back();
		}	
		
		vector<ll>::iterator it = v.begin();
		for(i=0;i<n;i++) {
			if(it == v.end())
				cout<<1<<" ";
			else if(i == *it) {
				cout<<0<<" ";
				it++;
			}
			else
				cout<<1<<" "; 
		}
		cout<<"\n";
	}
	
	return 0;
}
