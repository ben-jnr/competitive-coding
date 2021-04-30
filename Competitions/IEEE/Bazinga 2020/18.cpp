#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
	long long int a,b,n,i,index1=0,index2=0;
	long long int arr[100] = {1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845, 35357670, 129644790, 477638700, 1767263190, 6564120420, 24466267020, 91482563640, 343059613650, 1289904147324, 4861946401452};
	n=sizeof(arr)/sizeof(arr[0]);
	cin>>a>>b;
	for(i=1;i<n;i++)
	{
		if(a==arr[i])
			index1 = i;
		if(b == arr[i])	
			index2 = i;
	}
	index1 +=2;
	index2 +=2;
	cout<<index1<<"\n"<<index2;
	return 0;  
} 
