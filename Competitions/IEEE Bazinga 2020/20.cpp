#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
  int n,i,arr[10000];
  cin>>n;
  for(i=0;i<n;i++)
  	cin>>arr[i];
  sort(arr,arr+n);
  for(i=n-1;i>=0;i--)
  	cout<<arr[i]<<" ";
  return 0; 
} 
