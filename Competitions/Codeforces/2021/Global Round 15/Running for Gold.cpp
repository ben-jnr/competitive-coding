#include<iostream>
#include<set>
using namespace std;
typedef long long ll;


int main() 
{
	int t,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		int rank[n][5];
		
		for(int i=0; i<n;i++) {
			for(int j=0; j<5; j++) {
				cin>>rank[i][j];
			}
		}
		
		int sup = 0, next = 1, counts = 0, countn = 1;
		
		if(n==1)
			cout<<1<<endl;
		else {
			for(int i=0; i<n-1; i++) {
				counts = countn = 0;
				for(int j=0; j<5; j++) {
					if(rank[sup][j] < rank[next][j])
						counts++; 
					else
						countn++;
				}	
				
				if(counts > countn)
					next++;
				else {
					sup = next;
					next++;
				}
			}
			
			int flag=1;
			for(int i=0; i<sup; i++) {
				next = i;
				counts = countn = 0;
				for(int j=0; j<5; j++) {
					if(rank[sup][j] < rank[next][j])
						counts++; 
					else
						countn++;
				}
				if(counts <= countn) {
					flag = 0;
					break;
				}
			}
			
			if(flag)
				cout<<sup+1<<endl;
			else
				cout<<-1<<endl;
		}	
	}
}
