#include<iostream>
using namespace std;
typedef long long ll;


void pattern(string s, int open, int n, int &count) {
	if(count == 0)
		return;
	if(n == 0 && open == 0) {
		cout<<s<<endl;
		count--;
		return;
	}
	if(open < n) {
		s.push_back('(');
		pattern(s,open+1,n,count);
		s.pop_back();	
	}
	if(open > 0) {
		s.push_back(')');
		pattern(s,open-1,n-1,count);
		s.pop_back();
	}
}


int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		string s="";
		int count=n;
		pattern(s,0,n,count);		
	}
	return 0;
}
