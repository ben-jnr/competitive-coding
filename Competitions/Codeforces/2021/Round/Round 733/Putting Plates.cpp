#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	int t,h,w,i,j;
	cin>>t;
	while(t--) 
	{
		cin>>h>>w;
		for(i=0;i<h;i++) {
			for(j = 0; j<w;j++) {
				if((i == 0 || i == h-1) && i!=1) {
					if(j%2 == 0)
						cout<<1;
					else
						cout<<0;
				}
				else if(i%2==0 && i!=h-2) {
					if((j == 0 || j==w-1) && j!=1)
						cout<<1;
					else
						cout<<0;
				}
				else
					cout<<0;
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
