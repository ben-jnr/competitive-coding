#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	ll t;
	cin>>t;
	while(t--) 
	{
		ll n;
		string s;
		cin>>n;
		cin>>s;
		int count=0, ans=0, i;
		for(i=0; s[i+1]!='\0'; i++) {
			if(s[i] != '0')
				ans += ((int)s[i]-48) + 1;  
		}
		if(s[i] != '\0')
			ans+=(int)s[i]-48;
		cout<<ans<<endl;
	}
}
