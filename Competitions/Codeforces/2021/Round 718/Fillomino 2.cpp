#include<iostream>
#include<deque>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,i,j,k,count,current;
	cin>>n;
	ll a[n][n] = {};
	
	deque<pair<ll,ll>> d;	
	deque<pair<ll,ll>>::iterator p;
	
	for(i=0;i<n;i++) 
		cin>>a[i][i];
	
	
	for(i=n-1;i>=0;i--)
	{
		count = a[i][i]-1;
		current = a[i][i];
		j = i;
		k = i; 
		while(count > 0)
		{
			if(j+1 < n && a[j+1][k] == 0)
			{
				a[j+1][k] = current;
				d.push_back({j,k});
				j++;
				count--;
			}
			else if(k-1 >=0 && a[j][k-1] == 0)
			{
				a[j][k-1] = current;
				k--;
				count--;
			}
			else
			{	
				p = d.begin();
				d.pop_front();
				j = p->first;
				k = p->second;
			}
		}
	}	
	
	for(i=0;i<n;i++) {
		for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}

}
