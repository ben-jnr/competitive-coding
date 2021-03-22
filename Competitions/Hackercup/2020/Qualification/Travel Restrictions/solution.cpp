//question 1
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i,j,k,flag;
	char a[50];
	string in,out;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	getline(fin,in);
	t=stoi(in);
	for(i=0;i<t;i++) {
		getline(fin,in);
		n=stoi(in);
		getline(fin,in);
		getline(fin,out);
		fout<<"Case #"<<i+1<<":\n";
		for(j=0;j<n;j++) {
			a[j]='Y';
			flag =1;
			for(k=j-1;k>=0;k--) {
				if(flag && out[k+1] == 'Y' && in[k]=='Y')
					a[k]='Y';
				else {
					a[k]='N';
					flag=0;
				}
			}
			flag =1;
			for(k=j+1;k<n;k++) {
				if(flag && out[k-1] == 'Y' && in[k]=='Y')
					a[k]='Y';
				else {
					a[k]='N';
					flag = 0;
				}	
			}
			for(k=0;k<n;k++) {
				fout<<a[k];
			}
			fout<<"\n";
		}
	}
	
	fout.close();
	fin.close();
}
