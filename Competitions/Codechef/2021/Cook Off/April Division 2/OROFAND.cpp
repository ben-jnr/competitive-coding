#include<iostream>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,q,i,j,temp,res,x,v;
	cin>>t;
	while(t--) {
	
        	cin>>n>>q;
        	ll a[n];
        	for(i=0;i<n;i++)
            		cin>>a[i];
        	ll dp[31] = {0};
		
		
		for(i=0;i<n;i++)
		{
		    	for(j=0;j<31;j++)
		    	{
		        	temp = 1<<j;
		        	if(a[i] & temp)
		        		dp[j] += 1;    
		    	}
		}
		
		
        	res = 0;
		for(i=0;i<31;i++)
		{
		    	temp = 1<<i;
		    	if(dp[i])
		        	res += temp;
		}
        
        	
        	cout<<res<<endl;
        	
        	
		for(i=0;i<q;i++)
		{
		    	cin>>x>>v;
		   	
		    	for(j=0;j<31;j++)
		    	{
		        	temp = 1<<j;
		        	if(a[x-1] & temp)
		            		dp[j] -= 1;
		        	if(v & temp)
					dp[j] += 1;
		    	}
			
			
			a[x-1] = v;
		    	res = 0;
		    	for(j=0;j<31;j++)
		    	{
		        	temp = 1<<j;
		        	if(dp[j] > 0)
		        		res += temp;
		    	}
		   	
		   	cout<<res<<endl;
		}
		
	}
}
