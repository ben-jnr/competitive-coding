#include<iostream>
#include<vector>
#include<deque>
using namespace std;
typedef long long ll;


int main() 
{
	int t,n,i,flag;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ll a[1000];
		vector<ll> even,odd;
		deque<ll> res;
		
		for(i=0;i<n;i++)
			cin>>a[i];
		
		for(i=0;i<n;i++)
			if(a[i] == 0)
				even.push_back(a[i]);
				
		for(i=0;i<n;i++)
		{
			if(a[i] == 0)
				continue;
			if(a[i] % 2 == 0)
				even.push_back(a[i]);
			else
				odd.push_back(a[i]);
		}
		
		flag = 0;
		
		vector<ll>::iterator j = even.begin();
		vector<ll>::iterator k = odd.begin();
		
		for(i=0;i<n;i++)
		{
			if(j==even.end() || k==odd.end())
				break;
			
			if(flag)
			{
				res.push_back(*j);
				j++;
				flag = 0;
			}
			
			if(!flag)
			{
				res.push_back(*k);
				k++;
				flag = 1;	
			}
		}
		
		if( j != even.end() || k != odd.end())
		{
			while(k != odd.end()) 
			{
			
				res.push_back(*k);
				k++;	
			} 
			
			while(j != even.end()) 
			{
			
				res.push_back(*j);
				j++;	
			} 
			
		} 

		
		if(n > 1)
		{
			if(res[n-1] % 2 == 0)
			{
				i = res[n-1];
				res.pop_back();
				res.push_front(i);					
			}
			
			if(res[n-1] % 2 == 0)
			{
				for(i=n-2;i>=0;i--)
				{
					if(res[i] % 2 == 1)
					{
						swap(res[i], res[n-1]);
						break;
					}
				}
			}	
		}
		
		for(auto u:res)
			cout<<u<<" ";
		cout<<endl;
	}
}
