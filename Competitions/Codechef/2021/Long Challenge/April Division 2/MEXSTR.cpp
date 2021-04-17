#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() 
{
	ll t,i,j,len,start,req,current,index1,index0;
	char flag;
	cin>>t;
	string s,str;
	deque<ll> one,zero;
	vector <char> v;
	
	while(t--) 
	{
		v.clear();
		cin>>s;
		len = s.size();
		for(i=0; i<len; i++)
			if(s[i]=='1')
				break;
	
		start = i;
		if(start == len)
			v.push_back('1');
		
		else 
		{
			one.clear();
			zero.clear();
			flag = ' ';
			ll dp[len+1];
			dp[len] = 0;
			
			for(i=len-1; i>=start; i--) 
			{	
				if(s[i] == '1')
					one.push_front(i);
				else
					zero.push_front(i);	
				
				if(flag == ' ') 
				{
					flag = s[i];
					dp[i] = dp[i+1];
				}
				else if(s[i] == flag) 
				{
					dp[i] = dp[i+1];
				}
				else 
				{
					dp[i] = dp[i+1]+1;
					flag = ' ';
					
				}
			}				
				


			if(dp[start] == 0 && start == 0) 
			{
				v.push_back('0');
			}
			else 
			{					
				v.push_back('1');
				if(zero.begin() == zero.end())
					v.push_back('0');
				else if(one.begin() + 1 == one.end())
					v.push_back('1');
				else
				{
					req = dp[start + 1]+1;
					index1 = index0 = 0;
					current = start;
					
					while(req > 1) 
					{
						while(one[index1] <= current)
							index1++;
						while(zero[index0] <= current)
							index0++;
						if(dp[zero[index0] + 1] == req-2)
						{
							v.push_back('0');
							current = zero[index0];
						}
						else
						{
							v.push_back('1');
							current = one[index1];
						}
						req--;	
						
					}
						
					if(current == len-1)
						v.push_back('0');
					else 
					{
						if(s[len-1] == '1')
							v.push_back('0');
						else
							v.push_back('1');
					}
				}
			}	
		}
		for(auto u:v)
			cout<<u;
		cout<<endl;
	}
}
