#include<string>
#include<iostream>
using namespace std;

int main() {
	int t,n,m,i,j,count1,count2;
	string temp;
	cin>>t;
	while(t) {
		cin>>n>>m;
		string s[n];
		for(i=0;i<n;i++) {
			cin>>temp;
			s[i]=temp;
		}
		count1 = count2 = 0;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				if((i+j)%2 == 0) {
					if(s[i][j] == '*')
						count1++;
					else
						count2++;
				}
				else {
					if(s[i][j] == '.')
						count1++;
					else
						count2++;
				}	
			}
		}
		if(n%2 == 1 && m%2 == 1) 
			cout<<count2<<endl;
		else
			cout<<min(count1,count2)<<endl;
		t--;
	}
	return 0;
}
