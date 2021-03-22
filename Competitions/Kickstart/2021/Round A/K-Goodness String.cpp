#include<iostream>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<climits>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,k,count,len,tlimit;
	string s;
	cin>>tlimit;
	t=0;
	while(t<tlimit) {
		count=0;
		cin>>n>>k;
		cin>>s;
		len = s.size();
		for(int i=0; i<len/2; i++) {
			if(s[i] != s[len-1-i])
				count++;
		}
		
		if(k<count)
			cout<<"Case #"<<t+1<<": "<<count-k<<endl;
		else
			cout<<"Case #"<<t+1<<": "<<k-count<<endl;
		t++;
	}
}
