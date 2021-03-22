#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	int t,n,i;
	cin>>t;
	while(t--) {
		cin>>n;
		
		ll arr[n],dep[n],delay[n],time=0;
		for(i=0;i<n;i++)
			cin>>arr[i]>>dep[i];
		for(i=0;i<n;i++)
			cin>>delay[i];
			
		time = arr[0] + delay[0];
		for(i=0;i<n-1;i++) {
			time = time + ((dep[i]-arr[i]+1)/2);
			if(time < dep[i])
				time = dep[i];
			time += arr[i+1] - dep[i] + delay[i+1];
		}
	
		cout<<time<<"\n";
	}
	
	return 0;
}
