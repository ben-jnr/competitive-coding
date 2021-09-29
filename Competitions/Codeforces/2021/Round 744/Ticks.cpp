#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	int t,n,m,k,flag,d,l,i,j;
	cin>>t;
	while(t--) {
		cin>>n>>m>>k;
		char a[n][m];
		bool visited[n][m];
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				visited[i][j]=false;
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				cin>>a[i][j];
		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				if(a[i][j] == '.')
					continue;
				if(i-k<0 || j-k<0 || j+k>m-1)
					continue;
				for(l=1; l<=k; l++) {
					if(a[i-l][j-l] == '.' || a[i-l][j+l] == '.')
						break;
				}
				if(l == k+1) {
					visited[i][j]=true;
					for(l=1; l<=k; l++) {
						visited[i-l][j-l]=true;
						visited[i-l][j+l]=true;
					}
					for(l=k+1; ;l++) {
						if(i-l < 0 || j-l < 0 || j+l>m-1)
							break;
						if(a[i-l][j-l] == '.' || a[i-l][j+l] == '.')
							break;
						visited[i-l][j-l]=true;
						visited[i-l][j+l]=true;
					}
				}	
			}
		}
		flag=1;
		for(i=0; i<n && flag; i++) {
			for(j=0; j<m && flag; j++) {
				if(a[i][j] == '*' && visited[i][j])
					continue;
				else if(a[i][j] == '.' && !visited[i][j])
					continue;
				else
					flag=0;
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
