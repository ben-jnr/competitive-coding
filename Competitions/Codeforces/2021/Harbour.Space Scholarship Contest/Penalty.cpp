#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;


int main() 
{
	int i, t, counta1, counta0, countb1, countb0, kicka, kickb;
	cin>>t;
	while(t--) 
	{
		char a[5], b[5];
		for(i=0; i<5; i++)
			cin>>a[i]>>b[i];
		
		counta1 = counta0 = countb1 = countb0 = kicka = kickb = 0;
		
		for(i=0;i<5;i++) {
						
			if(a[i] == '1') {
				counta1++;
				counta0++;
			}
			else if(a[i] == '?') {
				counta1++;
			}
			
			kicka++;
			
			if(counta1 > (countb0 + 5 - i))
				break;
			
			if(countb1 > (counta0 + 4 - i))
				break;	
			
			if(b[i] == '1') {
				countb1++;
				countb0++;
			}
			else if(b[i] == '?') {
				countb1++;
			}
			
			kickb++;
			
			if(counta1 > (countb0 + 4 - i))
				break;
			
			if(countb1 > (counta0 + 4 - i))
				break;	
				
		}	
		
		cout<<kicka+kickb<<endl;
	}
}
