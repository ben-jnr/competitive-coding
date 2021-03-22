#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count = 0;
	count = n/5;
	if(n%5 > 0)
		count++;
	cout<<count;
	return 0;
}
