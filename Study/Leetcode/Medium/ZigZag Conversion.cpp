#include<iostream>
using namespace std;

int main() {
	string s;
	int r;
	cin>>s;
	cin>>r;
	
	int len = s.size();
	int k,l;
	string sf("");
	
	k = 2*(r-1);
	if(r == 1)
		cout<<s<<endl;
	else {
		for(int j=0; j<len; j+=k)
			sf += s[j];
			
		for(int i=1;i<r-1;i++) {
			l = 2*(r-1-i);
			for(int j=i; j<len;j+=k) {
				sf += s[j];
				if(j+l < len)
					sf += s[j+l];
			}
		}
		
		for(int j=r-1; j<len; j+=k)
			sf += s[j];
		cout<<sf<<endl;
	}
}
