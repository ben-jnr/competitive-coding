#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;

int main() {

	int tlimit,t,n,rowarr,colarr,i,j,minimum,count;
	cin>>tlimit;
	t=1;
	
	while(t<=tlimit) {
		cin>>n;
		char c[n][n];
		int rowarr[n] = {0};
		int colarr[n] = {0};
		minimum=INT_MAX;
		count=0;
		
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				cin>>c[i][j];
				if(c[i][j] == '.') {
					if(rowarr[i] >= 0)
						rowarr[i]++;
					if(colarr[j] >= 0)
						colarr[j]++;
				}
				else if(c[i][j] == 'O') {
					rowarr[i]=-1;
					colarr[j]=-1;
				}
			}
		}
		
		for(i=0; i<n; i++) {
			if(rowarr[i] >= 0) {
				if(rowarr[i] < minimum) {
					minimum = rowarr[i];
					count = 1;
				}
				else if(rowarr[i] == minimum) {
					count++;
				}
			}
			if(colarr[i] >= 0) {
				if(colarr[i] < minimum) {
					minimum = colarr[i];
					count = 1;
				}
				else if(colarr[i] == minimum) {
					count++;
				}
			}
		}
			
		if(minimum == 1) {
			for(i=0; i<n; i++) {
				for(j=0; j<n; j++) {
					if(c[i][j] == '.' && rowarr[i]==1 && colarr[j]==1) 
						count--;
				}	
			}
		}		
				
		if(minimum == INT_MAX)
			cout<<"Case #"<<t<<": Impossible\n";
		else
			cout<<"Case #"<<t<<": "<<minimum<<" "<<count<<endl;
		t++;
	}

}
