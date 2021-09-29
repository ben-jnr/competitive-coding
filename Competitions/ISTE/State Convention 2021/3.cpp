#include<iostream>
using namespace std;


int main() {
	
	int n,cr,cl,tr=0,tl=0,rs=0,ls=0,r,l;
	cin>>n>>cr>>cl;
	for(int i=0;i<n;i++) {
		cin>>r>>l;
		tr += r;
		tl += l;
	}
	rs = tr / 10;
	if(tr % 10 >0)
	rs++;
	
	ls = tl / 10;
	if(tl % 10 >0)
	ls++;
	
	cout<<((rs*cr)+(ls*cl));
	return 0;
}
