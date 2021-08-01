#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t,n,k,d,i,j,total,temp;
	cin>>t;
	for(i=0;i<t;i++) {
		cin>>n>>k>>d;
		total = 0;
		for(j=0;j<n;j++) {
			cin>>temp;
			total += temp;
		}
		if(total >= k*d) 
			cout<<d<<endl;
		else 
			cout<<total/k<<endl;
	}
	return 0;
}
