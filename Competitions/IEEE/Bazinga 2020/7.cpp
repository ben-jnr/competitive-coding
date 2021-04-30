#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    long int r,c,arr[1000][1000],x,y,i,j,count=0;
    cin>>r>>c;
    for(i=0;i<r;i++)
    	for(j=0;j<c;j++)
    		cin>>arr[i][j];
    cin>>x>>y;
    for(i=0;i<r;i++) {
    	for(j=0;j<c;j++) {
    		if(arr[i][j] != 0)  {
    			if(x>i)
    				count += x-i;
    			else
    				count+= i-x;
    			if(y>j)
    				count+= y-j;
    			else
    				count+= j-y;	
    		}	
    	}
    }
    cout<<count;
    return 0; 
} 
