#include <bits/stdc++.h> 
using namespace std;  

int gcd(int a, int b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
 
int main() 
{ 
    int n,z,temp,i,j,k,count=0,index=0,arr[1000];
    cin>>n>>z;
    for(i=0;i<n;i++)
    {
    	cin>>temp;
    	if(temp%z==0) {
    		arr[index] = temp;
    		index++;
    	}
    }
    for(i=0;i<index-2;i++) {
    	for(j=i+1;j<index-1;j++) {
    		for(k=j+1;k<index;k++) {
    			temp = gcd( gcd(arr[i],arr[j]), arr[k]);
    			if(temp == z)
    				count++;
    		}
    	}
    }
    cout<<count;
    return 0;
} 
