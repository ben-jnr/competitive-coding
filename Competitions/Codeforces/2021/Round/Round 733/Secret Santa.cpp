#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() 
{
	int t,n,k,p,i,temp;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		map<int,int> m1;
		map<int,int> m2;
		vector<int> v1, v2;
		int a[n+1];
		
		for(i=1;i<=n;i++) {
			cin>>a[i];
			m1[i] = 0;
			m2[i] = 0;
		}
		
		k = 0;
		p = 0;
		for(i = 1; i <= n; i++) {
			if(m2[a[i]] != 0) {
				v1.push_back(i);
				p++;
			}
			else {
				m1[i] = a[i];
				m2[a[i]] = i;
				k++;
			}
		}
		
		for(i=1;i<=n;i++) {
			if(m2[i] == 0)
				v2.push_back(i);
		}
		
		for(i=0;i+1<p;i=i+2) {
			if(v1[i] == v2[i] || v1[i+1] == v2[i+1]) {
				m1[v1[i]] = v2[i+1];
				m1[v1[i+1]] = v2[i];
			}
			else {
				m1[v1[i]] = v2[i];
				m1[v1[i+1]] = v2[i+1];
			}
		}
			
		if(i == p-1) {
			if(v1[i] == v2[i]) {
				m1[v1[i]] = a[v1[i]];
				temp = m2[a[v1[i]]];
				m1[temp] = v1[i];
			}
			else {
				m1[v1[i]] = v2[i];
			}
		}
		
		cout<<k<<endl;
		for(auto u:m1)
			cout<<u.second<<" ";
		cout<<endl;	
		
	}
}
