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
	ll t,i,n,k;
	cin>>t;
	while(t--) 
	{
		cin>>n>>k;
		ll arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		i = 0;
		while(k>0 && i<n-1) 
		{
			if(arr[i] > 0) 
			{
				arr[i]--;
				arr[n-1]++;
				k--;
			}
			else
			{
				i++;
			}
		}
		
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	
	}
}
