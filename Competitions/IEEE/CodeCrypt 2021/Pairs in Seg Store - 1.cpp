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
	ll n,k,i,count,j;
	
	cin>>n>>k;
	ll arr[n];
	
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	count=0;
	for(i=0;i<n;i++) 
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j]) % k == 0)
			{
				count++;
			}
		}
	}
	
	cout<<count<<endl;
}
