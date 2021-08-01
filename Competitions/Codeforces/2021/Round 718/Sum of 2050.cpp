#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,d,q,sum;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ll d = n%2050;
		ll q = n/2050;
		if(d==0) 
		{
			sum = 0;
			while(q>0) 
			{
				d = q%10;
				sum += d;
				q = q/10;
			}
			cout<<sum<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
