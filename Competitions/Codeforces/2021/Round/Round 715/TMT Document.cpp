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
	ll t,i,j,n,ttotal,mtotal,tends;
	int flag;
	string s;
	cin>>t;
	while(t--) 
	{
		ttotal = 0;
		mtotal = 0;
		cin>>n;
		cin>>s;
		flag = 1;
		for(i=0;i<n;i++) 
		{
			if(s[i] == 'T')
				ttotal++;
			else
				mtotal++;
		}	
		
		if(ttotal == 2*mtotal) 
		{
			ll a[mtotal][3];
			j = 0;
			for(i=0;i<n && j<mtotal;i++) 
			{
				if(s[i] == 'T') 
				{
					a[j][0] = i;
					j++; 
				}
			}
			
			tends = i;
			
			j = 0;
			for(i=0;i<n && j<mtotal;i++) 
			{
				if(s[i] == 'M') {
					if(i > a[j][0]) 
					{
						a[j][1] = i;
						j++; 
					}
					else 
					{
						flag = 0;
						break;
					}
				}
			}
			
			if(flag) 
			{
				j = 0;
				for(i=tends;i<n && j<mtotal;i++) 
				{
					if(s[i] == 'T') {
						if(i > a[j][1]) 
						{
							a[j][2] = i;
							j++; 
						}
						else 
						{
							flag = 0;
							break;
						}
					}
				}
			}
					
		}
		else
			flag = 0;
	
		
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
