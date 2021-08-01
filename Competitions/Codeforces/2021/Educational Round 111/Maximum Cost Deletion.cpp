#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int t,a,b,n,i,l,c0,c1;
	cin>>t;
	string s;
	while(t--) 
	{
		cin>>n>>a>>b;
		cin>>s;
		c0 = c1 = 0;
		for(i=0; s[i]!='\0'; i++) {
			if(s[i] == '0') {
				if(i == 0)
					c0++;
				else if(s[i] != s[i-1])
					c0++;
			}
			
			else {
				if(i == 0)
					c1++;
				else if(s[i] != s[i-1])
					c1++;
			}
		}	
		
		l = i;		
			
		cout<<max(((a*l)+b*(min(c0,c1)+1)), (a+b)*l)<<endl;
	}
}
