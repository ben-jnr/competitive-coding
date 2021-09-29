#include<iostream>
#include<vector>
#include<climits>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,tlimit,r,c,k,i,j,count,steps,ans;
	cin>>tlimit;
	char temp;
	t=1;
	while(t<=tlimit) 
	{
		cin>>r>>c>>k;
		vector<vector<char>> v;
		for(i=0;i<r;i++) {
			vector<char> tempv;
			for(j=0;j<c;j++) {
				cin>>temp;
				tempv.push_back(temp);
			}
			v.push_back(tempv);
		}
		
		vector<int> up(c,0);
		vector<int> down(c,0);
		ll ans = INT_MAX;
		ll count=0,steps=0;
		
		for(i=0; i<c; i++)
			if(v[k-1][i] == 'X')
				count++;
		ans = min(ans, count);
		
		
		for(i=0; i<k-1; i++) {
			for(j=0; j<c; j++) {
				if(v[i][j] == 'X')
					up[j]++;	
			}
		}
		
		for(i=k-1; i<r; i++) {
			count=0;
			steps++;
			for(j=0; j<c; j++) {
				if(v[i][j] == 'X') {
					up[j]++;
				}
				if(i+1 < r) {
					if(v[i+1][j] == 'X' || up[j] > k-1)
						count++;
				}
				else if(i==r-1) {
					if(up[j] > k-1)
						count++;
				}
			}
			ans = min(ans, count+steps);
		}	
				
		steps = 0;
		
		for(i=r-1; i>k-1; i--) {
			for(j=0; j<c; j++) {
				if(v[i][j] == 'X')
					down[j]++;	
			}
		}
		
		for(i=k-1; i>=0; i--) {
			count=0;
			steps++;
			for(j=0; j<c; j++) {
				if(v[i][j] == 'X') {
					down[j]++;
				}
				if(i-1 >= 0) {
					if(v[i-1][j] == 'X' || down[j] > r-k)
						count++;
				}
				else if(i==0) {
					if(down[j] > r-k)
						count++;
				}
			}
			ans = min(ans, count+steps);
		}
		
		cout<<"Case #"<<t<<": "<<ans<<endl;
		
		t++;
	}
}
