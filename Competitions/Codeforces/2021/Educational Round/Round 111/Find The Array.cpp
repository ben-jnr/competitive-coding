#include<iostream>
using namespace std;


int main() {
	int t,i,prev,curr,count,s;
	
	int a[5010];
	prev = 1;
	curr = 1;
	count = 1;
	for(i=1;i<=5000;i++) {
		a[i] = count;
		curr++;
		if(curr == prev + 1) {
			curr = 1;
			prev = prev + 2;
			count++;
		}
	}
	
	cin>>t;
	while(t--) {
		cin>>s;
		cout<<a[s]<<endl;
	}
}
