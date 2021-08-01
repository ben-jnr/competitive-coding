#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() 
{
	int n,t;
	cin>>t;
	while(t--) 
	{
		string s;
		cin>>n;
		cin>>s;
		string temp = s;
		sort(temp.begin(), temp.end());
		int count = 0;
		for(int i=0; s[i]!='\0';i++) {
			if(s[i] != temp[i])
				count++;
		}
		cout<<count<<endl;
	}
}
