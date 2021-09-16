//Find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i,temp,l=INT_MAX,h=INT_MIN;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array elements: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	for(auto u:v) {
		if(u<l)
			l=u;	
		if(u>h)
			h=u;
	}
	cout<<"lowest: "<<l<<"\nhighest: "<<h<<endl;
	return 0;
}


/*
time complexity : O(n)
*/

