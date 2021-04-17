#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;


int isLargerOrEqual(string A,string B, ll na, ll nb) 
{
	if(na > nb)
		return 1;
	else if(na < nb)
		return 0; 
	for(ll i=0;i<na;i++) 
	{
		if(A[i] > B[i])
			return 1;
		else if(A[i] < B[i])
			return 0;
	}
	return 1;
}


int main() 
{
	ll t,tlimit,a,b,i,count,na,nb,n;
	cin>>tlimit;
	t=0;
	string A,B,sub;
	
	while(t < tlimit) 
	{	
		cin>>n;
		cin>>a;
		n--;
		count=0;
		A = to_string(a);
		
		while(n--) 
		{
			cin>>b;
			B = to_string(b);
			na = A.size();
			nb = B.size();
			if(isLargerOrEqual(A, B, na, nb)) 
			{
				if(na == nb) 
				{
					count++;
					B = B+'0';
				} 
				else 
				{
					count += na-nb;
					sub = "";
					for (i=nb; i<na;i++)
        					sub = sub + '0';
        				B.append(sub);
					if(isLargerOrEqual(A,B,na,na)) 
					{
						sub = B;
						for (i=nb; i<na;i++)
        						sub[i] = '9';
        						
						if(isLargerOrEqual(A,sub,na,na)) 
						{
							B = B+'0';
							count++;
						}
						else 
						{
							B = A;
							for(i=na-1;i>=nb;i--) 
							{
								if(B[i] == '9')
									B[i] = '0';
								else 
								{
									B[i]++;
									break;
								}
							}
						}
							
					}
				}
			}
			A = B;
		}
		
		cout<<"Case #"<<t+1<<": "<<count<<endl;
		t++;
	}
}
