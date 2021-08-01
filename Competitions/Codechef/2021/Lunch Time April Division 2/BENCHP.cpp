#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,req,rod,i,temp,sum;
	cin>>t;
	while(t--) 
	{
		unordered_map<ll,ll> m;
		cin>>n>>req>>rod;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			if(m.find(temp) == m.end())
				m[temp]=1;
			else
				m[temp]++;
		}
		
		if(rod>=req)
			cout<<"YES\n";
		else
		{
			sum = rod;
			for(auto u:m)
			{
				if(u.second%2==0)
				{
					sum += u.first*u.second;
				}
				else
				{
					sum += u.first*(u.second-1);	
				}
			}
			if(sum>=req)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		
	}
}
