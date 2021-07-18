#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,tlimit,i,j;
	t=0;
	cin>>tlimit;
	while(t<tlimit) 
	{
		ll a[3][3], temp;
		unordered_map<ll,ll> m;
		int count = 0;
		for(i=0;i<3;i++) 
		{
			for(j=0;j<3;j++)
			{
				if(i == 1 && j == 1)
					continue;
				else
					cin>>a[i][j];
			}
		}
		
		if(2*a[0][1] == a[0][0]+a[0][2])
			count++;
		if(2*a[2][1] == a[2][0]+a[2][2])
			count++;
		if(2*a[1][0] == a[0][0]+a[2][0])
			count++;
		if(2*a[1][2] == a[0][2]+a[2][2])
			count++;
			
		temp = a[1][0] + a[1][2];
		if(temp % 2 == 0)
			m[temp/2]++;
			
		temp = a[0][1] + a[2][1];
		if(temp % 2 == 0)
			m[temp/2]++;
			
		temp = a[0][0] + a[2][2];
		if(temp % 2 == 0)
			m[temp/2]++;
		
		temp = a[0][2] + a[2][0];
		if(temp % 2 == 0)
			m[temp/2]++;
			
		int maxim = 0;	
		for(auto u:m)
		{
			if(u.second > maxim)
				maxim = u.second;
		}
		
		count += maxim;
		
		cout<<"Case #"<<t+1<<": "<<count<<endl;
		t++;
	}
}
