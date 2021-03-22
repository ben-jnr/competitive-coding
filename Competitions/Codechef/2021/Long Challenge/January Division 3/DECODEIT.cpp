#include<bits/stdc++.h>
using namespace std;


void printchar(int number) {
	cout<<char(number+97);
}


int main() {
	long long int t,i,j,n,number;
	int powers[4] = {8,4,2,1};
	string s; 
	cin>>t;
	for(i=0;i<t;i++) {
		cin>>n>>s;
		for(j=0;j<n;j++) {
			if(j%4 == 0) {
				if(j)
					printchar(number);
				number = 0;
			}
			if(s[j] == '1')
				number += powers[j%4];
		}
		printchar(number);
		cout<<endl;
	}
	return 0;
}
