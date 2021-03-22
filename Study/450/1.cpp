//Reverse the array
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i,temp;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array elements: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	reverse(v.begin(),v.end());
	cout<<"reverse: ";
	for(auto u:v)
		cout<<u<<" ";
	cout<<endl;
	return 0;
}

