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


int main() 
{
	ll t,n,x,i,size;
	cin>>t;
	while(t--) 
	{
		cin>>n>>x;
		map<ll,ll> m;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++) 
		{
			if(m.find(a[i]) == m.end())
				m[a[i]] = 1;
		}
		
		size = m.size();
		if(n-x >= size)
			cout<<size;
		else
			cout<<n-x;
		cout<<endl;
		
	}
}
