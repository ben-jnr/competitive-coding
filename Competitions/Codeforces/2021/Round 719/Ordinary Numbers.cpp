#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,d,count,l,s;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		count=0;
		l = log10(n);
		count = 9*l;
		
		s = 1;
		while(l--)
		{
			s = s*10 + 1;
		}
		
		ll i=1;
		while(i<=9)
		{
			if(n >= i*s)
				count++;
			else
				break;
			i++;
		}	
		
		cout<<count<<endl;
	}
}
