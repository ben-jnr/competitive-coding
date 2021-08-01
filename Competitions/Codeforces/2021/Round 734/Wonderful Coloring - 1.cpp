#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;


int main() 
{
	int t,n;
	string s;
	cin>>t;
	while(t--) 
	{
		cin>>s;
		unordered_map<char,int> m;
		for(int i=0; s[i]!='\0'; i++) {
			m[s[i]]++;
		}
		
		int g=0,r=0;
		
		for(auto u:m) {
			if(u.second > 1) {
				g++;
				r++;
			}
			else if(u.second == 1) {
				if(g<r)
					g++;
				else
					r++;
			}
		}	
		
		cout<<min(g,r)<<endl;
	}
}
