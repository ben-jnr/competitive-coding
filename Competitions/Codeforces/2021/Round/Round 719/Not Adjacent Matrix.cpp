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
	ll t,i,j,count,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ll arr[n][n];
		if(n==1)
			cout<<1<<endl;
		else if(n==2)
			cout<<-1<<endl;
		else if(n==3)
			cout<<"2 9 7\n4 6 3\n1 8 5\n";
		else
		{
			count = 1;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j%2 == 0)
					{
						arr[i][j] = count;
						count++;
					}
				}
			}
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j%2 == 1)
					{
						arr[i][j] = count;
						count++;
					}
				}
			}
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					cout<<arr[i][j]<<" ";
				cout<<endl;
			}
		}	
			
	
	}
}
