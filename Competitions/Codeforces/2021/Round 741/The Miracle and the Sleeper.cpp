#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,a,b,m;
	cin>>t;
	while(t--) 
	{
		cin>>a>>b;
		m = b/2+1;
		if(a <= m)
			cout<<b%m<<endl;
		else
			cout<<b%a<<endl;
	}
}
