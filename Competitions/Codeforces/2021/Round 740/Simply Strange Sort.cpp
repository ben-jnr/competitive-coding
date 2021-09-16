#include<iostream>
using namespace std;
typedef long long ll;


int main() 
{
	int t, n, i;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		int arr[n+1];
		for(i=1; i<=n; i++)
			cin>>arr[i];
			
		int flag = 1;
		int iter = 1;
		int count = 0;
		
		while(1) {
			flag = 0;
			for(i=1; i<=n-1; i++) {
				if(arr[i] > arr[i+1]) {
					flag = 1;
					break;
				}
			}
			
			if(!flag)
				break;
				
			count++;
			for(i=1; i<=n-1; i++) {
				if(i%2 == iter) {
					if(arr[i] > arr[i+1])
						swap(arr[i], arr[i+1]);
				}
			}
			
			iter = !iter;
		}
		
		cout<<count<<endl;
	
	}
}
