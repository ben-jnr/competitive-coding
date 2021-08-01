#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t;
	string s;
	cin>>t;
	while(t--) 
	{
		cin>>s;
		if(s[0] == '1')
			s.insert(1,"0");
		else
		{
			s.insert(0,"1");
		}
		cout<<s<<endl;
	}
}
