#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,i,count0,count1;
	string s;
	cin>>t;
	while(t--) 
	{
		int flag=0;
		count0 = 0;
		count1 = 0;
		cin>>n;
		cin>>s;
		for(i=0;i<n;i++)
		{
			if(s[i] == '0')
				count0++;
			else if(s[i] == '1')
				count1++;
			if(count1 >= count0)
			{
				flag=1;
				break;
			}
			
		}
		
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
