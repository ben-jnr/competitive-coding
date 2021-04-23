#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,m,i,j,k;
	cin>>t;
	while(t--) 
	{
		vector <pair<ll,ll>> v;
		cin>>n>>m;
		ll a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
				v.push_back({a[i][j],i});
			}
			sort(a[i], a[i]+m);
		}
		
		sort(v.begin(), v.end());
		
		ll select[n];
		
		for(i=0;i<n;i++)
			select[i]=0;
			
		for(i=0;i<m;i++)
			select[ v[i].second ]++;
		
		
		k = 0;
		for(i=0;i<n;i++)
		{
			if(select[i]) 
			{
				for(j=m-k;j<m;j++)
					cout<<a[i][j]<<" ";
				for(j=0;j<m-k;j++)
					cout<<a[i][j]<<" ";
				k = k + select[i]; 
				cout<<endl;
				
			}
			else
			{
				for(j=0;j<m;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		}
		
	}
}
