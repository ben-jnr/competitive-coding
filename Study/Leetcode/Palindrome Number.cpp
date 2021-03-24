#include<iostream>
using namespace std;

int main() {
	long int x;
	cin>>x;
	
	long int rev,d,temp;
	rev=0;
	temp = x;
	if(x<0)
		cout<<false;
	else {
		while(x>0) {
			d=x%10;
			x=x/10;
			rev = rev*10 + d;
		}				
		if(rev == temp)
			cout<<true;
		else
			cout<<false;
	}
}

