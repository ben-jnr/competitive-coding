#include<iostream>
typedef long long ll;
using namespace std;

int main() {
	ll tlimit, t, n, count;
	int flag;
	string s;
	cin>>tlimit;
	t=1;
	while(t<=tlimit) {
		int flag=0;
		count=0;
		cin>>n;
		cin>>s;
		for(int i=0; i<n; i++) {
			if(s[i] == 'O') {
				if(flag == 0)
					flag=1;
				else if(flag == -1) {
					flag=1;
					count++;
				}
			}
			else if(s[i] == 'X') {
				if(flag == 0)
					flag=-1;
				else if(flag == 1) {
					flag=-1;
					count++;
				}
			}
		}
		cout<<"Case #"<<t<<": "<<count<<endl;
		t++;
	}
	return 0;
}
