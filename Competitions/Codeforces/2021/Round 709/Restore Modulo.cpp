#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<climits>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,i,c,m,maxim,flag;
	cin>>t;
	while(t--) {
		cin>>n;
		ll arr[n];
		c=m=-1;
		maxim = -1;
		for(i=0;i<n;i++) {
			cin>>arr[i];
			if(arr[i]>maxim)
				maxim = arr[i];	
		}
		flag=0;	
		for(i=0;i<n-1;i++) {
			if(arr[i+1]>=arr[i]) {
				if(c==-1)
					c=arr[i+1]-arr[i];
				else if(c != arr[i+1]-arr[i]) {
					c=-1;
					flag= 1;
					break;
				}
			}
		}
			
		if(flag==1) {
			cout<<-1<<endl;
		}
			
		else if(c>-1) {
			flag=0;
			for(i=0;i<n-1;i++) {
				if(arr[i+1] < arr[i]) {
					if(m==-1)
						m=arr[i]+c-arr[i+1];
					else if(m != arr[i]+c-arr[i+1]) {
						m=-1;
						flag=1;
						break;
					}
				}
			}
			if(flag==1)
				cout<<-1<<endl;
			else if(m>-1 && c==0)
				cout<<-1<<endl;
			else if(m==-1)
				cout<<0<<endl;
			else if(maxim >= m)
				cout<<-1<<endl;
			else
				cout<<m<<" "<<c<<endl;
		}
		
		else if(flag ==0 && c==-1) {
			flag=0;
			c=arr[0]-arr[1];
			for(i=1;i<n-1;i++) {
				if(c!= arr[i]-arr[i+1]) {
					flag=1;
					break;
				}
			}	
			if(flag==1)
				cout<<-1<<endl;
			else
				cout<<0<<endl;
		}
		
			
	}
}
