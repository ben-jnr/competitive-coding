#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() {
	ll n,i,j;
	cin>>n;
	ll a[n],dp[n][n];
	
	for(i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			dp[i][j] = 0;

	for(i=1;i<=n;i++) {
		for(j=0;j+i<n;j++) {
			dp[j][j+i] = min(dp[j][j+i-1] + a[j+i] - a[j], dp[j+1][j+i] + a[j+i] - a[j]); 
		}	
	}
	
	cout<<dp[0][n-1]<<endl;
}
