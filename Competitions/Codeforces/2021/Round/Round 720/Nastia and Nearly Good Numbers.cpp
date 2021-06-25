#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,a,b,x,y,z;
	cin>>t;
	while(t--) 
	{
		cin>>a>>b;
		x = a*b;
		y = a;
		z = x + y;
		
		if(x == y)
			cout<<"NO\n";
		else
			cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
	}
}
