#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,q,x,sum,i,temp,rem;
	cin>>n;
	sum = 0;
	for(i=0;i<n;i++) 
	{
		cin>>temp;
		sum = (sum+temp+1000000007)%1000000007;
	} 
	
	cin>>q;
	
	for(i=0;i<q;i++)
	{
		cin>>x;
		sum = (sum*2)%1000000007;
		cout<<sum<<endl;
	}	
}
