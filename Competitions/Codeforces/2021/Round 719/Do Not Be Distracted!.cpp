#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,n,i;
	string s;
	cin>>t;
	while(t--) 
	{
		unordered_map<char,int> m;
		cin>>n;
		cin>>s;
		
		m[s[0]] = 1;
		for(i=1;i<n;i++)
		{
			
			if(s[i] != s[i-1])
			{
				if(m[s[i]] == 1)
					break;
				else
					m[s[i]] = 1;
			}
			
		}	
		if(i==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
}
