#include<iostream>
using namespace std;
typedef long long ll;

int main() 
{
	int t,n,flag,i;
	string s;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		cin>>s;
		flag = 1;
		for(i=0; i<n-1; i++) {
			if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')) {
				cout<<i+1<<" "<<i+2<<endl;
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<-1<<" "<<-1<<endl;
	}
}
