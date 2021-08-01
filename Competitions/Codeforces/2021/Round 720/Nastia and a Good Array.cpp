#include<iostream>
using namespace std;
typedef long long ll;



int main() 
{
	ll t,n,i,j,x,y;
		
	ll prime = 1000000007;
	
	cin>>t;
	while(t--) 
	{
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		cout<<n-1<<endl;
		for(i=0;i<n-1;i++)
		{
			j=i+1;
			if(a[i] == prime || a[j] == prime)
			{
				x = a[i];
				y = a[j];
			}	
			else if(a[i] < a[j])
			{
				x = a[i];
				y = prime;
			}
			else if(a[i] >= a[j])
			{
				x = a[j];
				y = prime;
			}
			cout<<i+1<<" "<<j+1<<" "<<x<<" "<<y<<endl;
			a[i] = x;
			a[j] = y;
		}
	
	}
}
