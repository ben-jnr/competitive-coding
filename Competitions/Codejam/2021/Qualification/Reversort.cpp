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
	ll t,tlimit,n,i,index,j,count;
	cin>>tlimit;
	t=0;
	while(t<tlimit) {
		cin>>n;
		ll arr[n];
		count=0;
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=1;i<n;i++) {
			index = -1;
			for(j=0; j<n; j++)
				if(arr[j] == i)
					index = j;
			count+= index-i+2;
			for(j=0; i-1+j<=index-j;j++)
				swap(arr[i-1+j],arr[index-j]);
		}
		cout<<"Case #"<<t+1<<": "<<count<<endl;
		t++;
	}
}
