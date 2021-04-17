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
	ll t,tlimit,n,c,i,temp,flag;
	cin>>tlimit;
	t=0;
	while(t<tlimit) {
		cin>>n;
		cin>>c;
		ll arr[n];
		for(i=0;i<n;i++)
			arr[i]=i+1;
						
		if(c >= n-1 && c < (n*(n+1))/2) {
			c=c-n+1;
			temp = n-1;
			flag=0;
			while(c>0) {
				if(temp <= c)
					for(i=flag/2; i<=n-1-i-flag%2; i++)
						swap(arr[i],arr[n-1-i-flag%2]);
				else
					for(i=flag/2; i<c+flag/2-(i-flag/2); i++)
						swap(arr[i],arr[c+flag/2-(i-flag/2)]);
				c=c-temp;
				temp--;	
				flag++;
			}
			
			cout<<"Case #"<<t+1<<": ";
			for(i=0;i<n;i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}
		else
			cout<<"Case #"<<t+1<<": "<<"IMPOSSIBLE"<<endl;
		t++;
	}
}
