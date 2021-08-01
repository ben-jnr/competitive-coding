#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,m,k,i,j,l,count,sum,low,high,mid,pos;
	cin>>t;
	while(t--) {
		count = 0;
		cin>>n>>m>>k;
		ll arr[n][m];	
		
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>arr[i][j];
		
		
		for(i=0;i<n;i++) {
			sum = 0;
			for(j=0;j<m;j++) {
				sum += arr[i][j];
				if(i==0)
					arr[0][j] = sum;
				else
					arr[i][j] = sum + arr[i-1][j];
			}
		}
		
		for(l=0;l<n;l++) {
			for(i=0;i+l<n;i++) {
				low = 0;
				high = m-l-1;
				pos = -1;
				while(low<=high) {
					mid = (low+high)/2;
					if(mid == 0 && i==0) 
						sum = arr[i+l][mid+l]; 
					else if(i==0)
						sum = arr[i+l][mid+l] - arr[i+l][mid-1];
					else if(mid == 0)
						sum = arr[i+l][mid+l] - arr[i-1][mid+l];
					else
						sum = arr[i+l][mid+l] - arr[i+l][mid-1] - arr[i-1][mid+l] + arr[i-1][mid-1]; 
					
					sum = sum / ((l+1)*(l+1));
					if(sum >= k) {
						pos = mid;
						high = mid-1;
					}
					else
						low = mid+1;
				}
				if(pos > -1) {
					count += m-l-pos;
				}
			}	
				
		}
		
		cout<<count<<endl;
	}
}
