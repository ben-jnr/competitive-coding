#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    int n,arr[100],profit,buy,i=0;
    cin>>n;
    profit =0;
    buy=-1;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    while(i<n) {
    	while(buy == -1 && i<n) {
    		while(arr[i]>arr[i+1] && i<n-1)
    			i++;
    		if(i != n-1)
    			buy = arr[i];
    		i++;
    	}
    	while( buy !=-1 && i<n) {
    		if(arr[i]>buy) {
    			while(arr[i]<arr[i+1] && i<n-1) 
    				i++;
    			profit += arr[i]-buy;
    			buy = -1;
    		}
    		i++;
    	}	    	
    }	
    if(profit>0)
    	cout<<profit;
    return 0; 
} 
