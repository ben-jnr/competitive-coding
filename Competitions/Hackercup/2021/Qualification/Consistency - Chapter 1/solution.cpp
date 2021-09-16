#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;

int main() {
	int t,tlimit,i,minimum,vcount,ccount,ans;
	char c;
	string s;
	cin>>tlimit;
	t=1;
	
	while(t<=tlimit) {
		cin>>s;
		unordered_map<char,int> m;
		vcount = ccount = 0;
		minimum = INT_MAX;
		for(c='A'; c<='Z'; c++)
			m.insert({c,0});
		
		for(i=0; s[i]!='\0'; i++) {
			m[s[i]]++;
			switch(s[i]) {
				case 'A': case 'E': case 'I': case 'O':
				case 'U': vcount++;
					  break;
				default: ccount++;
					 break;
			}
		}
		
		for(c='A'; c<='Z'; c++) {
			switch(c) {
				case 'A': case 'E': case 'I': case 'O':
				case 'U': minimum = min(minimum, ccount + 2*(vcount-m[c]));
					  break;	  
				default: minimum = min(minimum, vcount + 2*(ccount-m[c])); 
					 break;		
			}
		}
		cout<<"Case #"<<t<<": "<<minimum<<endl;
		t++;
	}
}
