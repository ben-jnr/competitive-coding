#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		int d = n%10;
		if(d == 9)
			cout<<(n/10) + 1<<endl;
		else
			cout<<n/10<<endl;
	}
}
