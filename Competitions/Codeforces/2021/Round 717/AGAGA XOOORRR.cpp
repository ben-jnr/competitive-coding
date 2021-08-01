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
	ll t,n,i,count,x,y;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ll a[n];
		x = 0;
		for(i=0;i<n;i++) 
		{
			cin>>a[i];
			x = x^a[i];
		}
		
		if(x == 0)
		{
			cout<<"YES\n";
		}
		else
		{
			count = 0;
			y = 0;
			
			for(i=0;i<n;i++)
			{
				y = y^a[i];
				if(y == x)
				{
					count++;
					y = 0;
				}
			}
			
			if(count >= 2 && count % 2 == 1)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
}
