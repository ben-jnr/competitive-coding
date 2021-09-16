#include<iostream>
using namespace std;

int main() {
	int t,tlimit,n,m,a,b;
	cin>>tlimit;
	t=1;
	
	while(t<=tlimit) {
		cin>>n>>m>>a>>b;
		if(a < n+m-1 || b < n+m-1) {
			cout<<"Case #"<<t<<": Impossible\n";
		}
		else {
			cout<<"Case #"<<t<<": Possible\n";
			for(int i=0; i<m; i++) {
				cout<<1<<" ";
			}
			cout<<endl;
			for(int i=1; i<n-1; i++) {
				for(int j=0; j<m; j++) {
					if(j==0 || j==m-1)
						cout<<1<<" ";
					else
						cout<<2<<" ";
				}
				cout<<endl;
			}
			cout<<b-(n+m-2)<<" ";
			for(int i=1; i<m-1; i++) {
				cout<<2<<" ";
			}
			cout<<a-(n+m-2)<<" ";
			cout<<endl;
		}
		t++;	
	}
	return 0;
}
