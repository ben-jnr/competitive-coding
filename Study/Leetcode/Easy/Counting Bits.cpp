#include<iostream>
#include<vector>
using namespace std;


vector<int> countBits(int n) {
	vector<int> v;
	v.push_back(0);
	for(int i=1;i<=n;i++) {
		if(i%2 == 1)
			v.push_back(v[i/2]+1);
		else
			v.push_back(v[i/2]);
	}
	return v;
}

int main() {
	int n;
	cout<<"Enter n : ";
	cin>>n;
	vector<int> v = countBits(n);
	for(auto u:v)
		cout<<u<<endl;
}
