#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int t,n,i,j,first,next,prev,p;
	string s;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		cin>>s;
		vector<int> v;
		
		for(i=0; s[i]!='\0'; i++) {
			if(s[i] == '2')
				v.push_back(i);	
		}
	
		if(v.size() == 1 || v.size() == 2) {
			cout<<"NO\n";
			continue;
		}
		
		cout<<"YES\n";
		p=0;
		
		for(i=0; s[i]!='\0'; i++) {
			if(s[i] == '1') {
				for(j=0;j<n;j++) {
					if(i==j)
						cout<<"X";
					else
						cout<<"=";
				}
				cout<<endl;
			}
			else {
				if(p==v.size()-1) {
					next = v[0];
					prev = v[p-1];
				}
				else if(p==0) {
					next = v[1];
					prev = v[v.size()-1];
				}
				else {
					next = v[p+1];
					prev = v[p-1];
				}
				for(j=0; j<n; j++) {
					if(i==j)
						cout<<"X";
					else if(j == next)
						cout<<"+";
					else if(j == prev) 
						cout<<"-";
					else
						cout<<"=";
				}
				cout<<endl;
				p++;
			}
		}
	}
}
