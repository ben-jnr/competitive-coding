#include<iostream>
#include<deque>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		int temp,n;
		deque<int> d;
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>temp;
			if(d.empty())
				d.push_back(temp);
			else if(temp < d.front())
				d.push_front(temp);
			else
				d.push_back(temp);
		}
		for(auto u:d)
			cout<<u<<" ";
		cout<<endl;
	}
}
