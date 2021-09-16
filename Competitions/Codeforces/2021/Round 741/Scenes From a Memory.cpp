#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int main() 
{
	int t,k,j;
	string n;
	vector<string> arr;
	cin>>t;
	while(t--) 
	{
		cin>>k;
		cin>>n;
		int flag = 1;
		
		for(int i=0; i<k; i++) {
			if(n[i] == '1' || n[i] == '4' || n[i] == '6' || n[i] == '8' || n[i] == '9') {
				flag = 0;
				cout<<1<<endl<<n[i]<<endl;
				break;
			}
		}	
		
		for(int i=0; i<k && flag; i++) {
			if(n[i] == '2') {
				for(j=i+1; j<k; j++) {
					if(n[j] == '2' || n[j] == '5' || n[j] == '7') {
						flag = 0;
						cout<<2<<endl<<'2'<<n[j]<<endl;
						break;
					}
				} 	
			}
		}
		
		for(int i=0; i<k && flag; i++) {
			if(n[i] == '3') {
				for(j=i+1; j<k; j++) {
					if(n[j] == '2' || n[j] == '3' || n[j] == '5') {
						flag = 0;
						cout<<2<<endl<<'3'<<n[j]<<endl;
						break;
					}
				} 	
			}
		}	
		
		for(int i=0; i<k && flag; i++) {
			if(n[i] == '5') {
				for(j=i+1; j<k; j++) {
					if(n[j] == '2' || n[j] == '5' || n[j] == '7') {
						flag = 0;
						cout<<2<<endl<<'5'<<n[j]<<endl;
						break;
					}
				} 	
			}
		}
		
		for(int i=0; i<k && flag; i++) {
			if(n[i] == '7') {
				for(j=i+1; j<k; j++) {
					if(n[j] == '2' || n[j] == '5' || n[j] == '7') {
						flag = 0;
						cout<<2<<endl<<'7'<<n[j]<<endl;
						break;
					}
				} 	
			}
		}
		
		if(flag)
			cout<<k<<endl<<n<<endl;	
	}
}
