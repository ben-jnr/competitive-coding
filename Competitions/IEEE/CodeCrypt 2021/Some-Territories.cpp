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
	ll count,i,j,maxi,k,l;
	int n,m;
	cin>>n>>m;
	ll arr[n][m],temp[n][m];
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>arr[i][j];
		
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			temp[i][j]=0;
	
	maxi = 0;
	deque<pair<ll,ll>> v;
	
	for(i=0;i<n;i++) 
	{
		for(j=0;j<m;j++)
		{		
			count = 0;
			v.clear();
			if(arr[i][j] == 1 && temp[i][j] == 0)
			{
				count++;
				v.push_back({i,j});
				temp[i][j]=1;
				
				while(v.size() > 0) 
				{
				
					k = v[0].first;
					l = v[0].second;
											
					v.pop_front();
					
					if(k+1 < n && arr[k+1][l]==1 && temp[k+1][l]==0) {
						temp[k+1][l] = 1;
						v.push_back({k+1,l});
						count++;
					}
					if(k-1 >= 0 && arr[k-1][l]==1 && temp[k-1][l]==0 ) {
						temp[k-1][l] = 1;
						v.push_back({k-1,l});
						count++;
					}
					if(l-1 >= 0 && arr[k][l-1]==1 && temp[k][l-1]==0 ) {
						temp[k][l-1] = 1;
						v.push_back({k,l-1});
						count++;
					}
					if(l+1 < m && arr[k][l+1]==1 && temp[k][l+1]==0) {
						temp[k][l+1] = 1;
						v.push_back({k,l+1});
						count++;
					}
					if(l+1 < m && k+1 < n && arr[k+1][l+1]==1 && temp[k+1][l+1]==0) {
						temp[k+1][l+1] = 1;
						v.push_back({k+1,l+1});
						count++;
					}
					if(l+1 < m && k-1 >= 0 && arr[k-1][l+1]==1 && temp[k-1][l+1]==0) {
						temp[k-1][l+1] = 1;
						v.push_back({k-1,l+1});
						count++;
					}
					if(l-1 >= 0 && k+1 < n && arr[k+1][l-1]==1 && temp[k+1][l-1]==0) {
						temp[k+1][l-1] = 1;
						v.push_back({k+1,l-1});
						count++;
					}
					if(l-1 >= 0 && k-1 >= 0 && arr[k-1][l-1]==1 && temp[k-1][l-1]==0) {
						temp[k-1][l-1] = 1;
						v.push_back({k-1,l-1});
						count++;
					}
						
				}
				if(count > maxi)
					maxi = count;
			}	
		}
	}
	cout<<maxi<<endl;
}
