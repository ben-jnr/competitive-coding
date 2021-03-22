//Find the "Kth" max and min element of an array 
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i,temp,k;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array elements: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"enter k: ";
	cin>>k;
	sort(v.begin(),v.end());
	cout<<"kth lowest: "<<*(v.begin() + (k-1))<<"\nkth highest: "<<*(v.begin() + (n-k))<<endl;
	return 0;
}


/* 
time complexity : O(nLogn)
faster times of O(n + kLogn) can be achieved by using min and max heaps
*/ 
