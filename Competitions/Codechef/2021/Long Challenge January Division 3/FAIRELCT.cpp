#include<bits/stdc++.h>
using namespace std;

void input(long long a[], long long n, long long &total) {
	for(long long i=0;i<n;i++) {
		cin>>a[i];
		total+=a[i];
	}
}

int main() {
	long long t,n,m,i,j,total1,total2,min;
	cin>>t;
	for(i=0;i<t;i++) {
		cin>>n>>m;
		long long a1[n],a2[m];
		total1 = total2 = min = j = 0;
		input(a1,n,total1);
		input(a2,m,total2);
		sort(a1, a1+n);
		sort(a2, a2+m);
					
		while(total1<=total2) {
			if(a2[m-j-1] > a1[j]) {
				total1 += a2[m-j-1]-a1[j];
				total2 -= a2[m-j-1]-a1[j];
				++j;			
				++min;
			}			
			else
				break; 
			if(j == m || j == n)
				break;
		}		
		
		
		if(total1 <= total2)
			cout<<-1<<endl;
		else
			cout<<min<<endl;
	}
	return 0;
}
