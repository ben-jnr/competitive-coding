#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,c1,c2;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		int d = n%3;
		c1 = c2 = n/3;
		if(d == 1)
			c1++;
		if(d == 2)
			c2++;
		cout<<c1<<" "<<c2<<endl;
	}
}
