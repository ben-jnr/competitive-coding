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


ll A[301][301];

int main() {
	ll t,tlimit,r,c,i,j,count;
	t=0;
	cin>>tlimit;
	
	while(t<tlimit) {
		cin>>r>>c;
		set<pair<ll,pair<ll,ll>>, greater<pair<ll, pair<ll,ll>>>> s;
		
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				cin>>A[i][j];

		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
				if(i>0 && A[i][j]<A[i-1][j]-1)
					s.insert({A[i][j],{i,j}});
				else if(i<r-1 && A[i][j]<A[i+1][j]-1)
					s.insert({A[i][j],{i,j}});
				else if(j>0 && A[i][j]<A[i][j-1]-1)
					s.insert({A[i][j],{i,j}});
				else if(j<c-1 && A[i][j]<A[i][j+1]-1)
					s.insert({A[i][j],{i,j}});
			}
		}
		
	
		count = 0;
		set<pair<ll, pair<ll,ll>>>::iterator itr = s.begin();
		
		
		while(!s.empty()) {
			
			itr = s.begin();
			i = itr->second.first;
			j = itr->second.second;
			
			if(i>0 && A[i][j]<A[i-1][j]-1) {
				count += A[i-1][j]-A[i][j]-1;
				A[i][j] = A[i-1][j]-1;
			}
			
			if(i<r-1 && A[i][j]<A[i+1][j]-1) {
				count += A[i+1][j]-A[i][j]-1;
				A[i][j] = A[i+1][j]-1;
			}
			
			if(j>0 && A[i][j]<A[i][j-1]-1) {
				count += A[i][j-1]-A[i][j]-1;
				A[i][j] = A[i][j-1]-1;
			}
			
			if(j<c-1 && A[i][j]<A[i][j+1]-1) {
				count += A[i][j+1]-A[i][j]-1;
				A[i][j] = A[i][j+1]-1;
			}	
			
			if(i>0 && A[i][j]>A[i-1][j]+1)
				s.insert({A[i-1][j],{i-1,j}});
			if(i<r-1 && A[i][j]>A[i+1][j]+1)
				s.insert({A[i+1][j],{i+1,j}});
			if(j>0 && A[i][j]>A[i][j-1]+1)
				s.insert({A[i][j-1],{i,j-1}});
			if(j<c-1 && A[i][j]>A[i][j+1]+1)
				s.insert({A[i][j+1],{i,j+1}});
			
			s.erase(itr);
	
		}				
				
		cout<<"Case #"<<t+1<<": "<<count<<endl;
		t++;
		
	}
}
