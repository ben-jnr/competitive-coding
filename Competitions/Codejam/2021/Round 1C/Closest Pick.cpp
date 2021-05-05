#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,tlimit,n,i,temp,sum,max,k,temp1,temp2;
	cin>>tlimit;
	double ans;
	t=0;
	
	while(t < tlimit) 
	{	
		cin>>n>>k;
		vector<ll> v,diff;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);	
		}
		
		sort(v.rbegin(),v.rend());
			
		
		
		
		temp1 = k-v[0];

		for(i=0;i<n-1;i++)
		{
			diff.push_back(v[i]-v[i+1]-1);
		}
		
		temp2 = v[n-1]-1;
		
		
		sum = 0;
		max = 0;
		
		
		sort(diff.rbegin(),diff.rend());
		
		
		if(n>=1)
		{
			sum = temp1 + temp2;
			max = sum;
		}
		if(n>=2)
		{
			sum = temp1 + (diff[0]+1)/2;
			if(sum > max)
				max = sum;
			sum = temp2 + (diff[0]+1)/2;
			if(sum > max)
				max = sum;
			sum = diff[0];
			if(sum > max)
				max = sum;
		}
		if(n>2)
		{
			sum = ((diff[0]+1)/2) + ((diff[1]+1)/2);
			if(sum > max)
				max = sum;
				
		}
		

		
		ans = (double)max/(double)k;
		
		
		cout<<"Case #"<<t+1<<": "<<ans<<endl;
		t++;
	}
}
