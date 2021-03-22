#include<iostream>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<climits>
using namespace std;
typedef long long ll;


int main() {
	ll tlimit,t,r,c,i,j,count,k;
	t=0;
	cin>>tlimit;
	while(t<tlimit) {
		count=0;
		cin>>r>>c;
		ll A[r][c];
		for(i=0;i<r;i++) 
			for(j=0;j<c;j++)
				cin>>A[i][j];
		
		ll left[i][j],right[i][j],down[i][j],up[i][j];
		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
			
				if(A[i][j] == 1) {
					if(j-1 < 0)
						left[i][j] = 1;
					else
						left[i][j] = left[i][j-1] + 1; 
				}
				else
					left[i][j] = 0;
			
					
				if(A[i][c-j-1] == 1) {
					if(c-j > c-1)
						right[i][c-j-1] = 1;
					else
						right[i][c-j-1] = right[i][c-j] + 1; 
				}
				else
					right[i][c-j-1] = 0;
					
				
				if(A[r-i-1][j] == 1) {
					if(r-i > r-1)
						down[r-i-1][j] = 1;
					else
						down[r-i-1][j] = down[r-i][j] + 1; 
				}
				else
					down[r-i-1][j] = 0;
					
					
				if(A[i][j] == 1) {
					if(i-1 < 0)
						up[i][j] = 1;
					else
						up[i][j] = up[i-1][j] + 1; 
				}
				else
					up[i][j] = 0;
			}
		}
			
			
			
		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
				if(down[i][j] >=2 ) {
					for(k=2;k<= down[i][j];k++) {
						if(left[i+k-1][j] >= 2*k)
							count++;
						if(right[i+k-1][j] >= 2*k)
							count++;
						if(k%2 == 0 && k/2 >= 2) {
							if((left[i+k-1][j]>=2) && (left[i+k-1][j] >= k/2))
								count++;
							if((right[i+k-1][j]>=2) && (right[i+k-1][j] >= k/2))
								count++;
						}
					}
				}
			}
		}
		
		
		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
				if(up[i][j] >=2 ) {
					for(k=2;k<= up[i][j];k++) {
						if(left[i-k+1][j] >= 2*k)
							count++;
						if(right[i-k+1][j] >= 2*k)
							count++;
						if(k%2 == 0 && k/2 >= 2) {
							if((left[i-k+1][j]>=2) && (left[i-k+1][j] >= k/2))
								count++;
							if((right[i-k+1][j]>=2) && (right[i-k+1][j] >= k/2))
								count++;
						}
					}
				}
			}
		}	
		
		cout<<"Case #"<<t+1<<": "<<count<<endl;
		t++;
	}
}
