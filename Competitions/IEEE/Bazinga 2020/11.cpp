#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    long int n,m,count,stage,temp,spread;
    cin>>n>>m;
    count =1;
    stage =1;
    temp =1;
    while(count<n) {
    	++stage;
    	if(stage<m)
    		temp = temp*stage;
    	else
    		temp = temp*m;
    	count = count +temp;
    }
    cout<<stage+1;
    return 0; 
} 
