#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	int t,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		int highest = -1;
		int d;
		
		while(n>0) {
			d = n%10;
			highest = max(highest, d);
			n = n/10;
		}	
		
		cout<<highest<<endl;
	}
}
