#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    long long n,flag,loop,trigger,temp,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	cin>>n;
    	flag=1;loop=1;trigger=0;
    	while(n>1) {
    		temp=n;
        	if(trigger == 1) {
        		flag = flag+loop;
        		n = n/2;
        	}
        	else {
        		n=(n+1)/2;
        	}
    		if(temp%2==1) {
    			if(trigger == 0)
    				trigger=1;
    			else
    				trigger = 0;
    		}	
    		loop=loop*2;
    	}
    	cout<<flag<<"\n";
    }
    return 0; 
} 
