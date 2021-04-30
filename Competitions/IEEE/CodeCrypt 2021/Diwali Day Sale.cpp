#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() 
{
	ll p,d,m,s,total,count;
	cin>>p>>d>>m>>s;
	count=0,total=0;
	
	while(p>m) {
		total+=p;
		p = p-d;
		if(total <= s)
			count++;
		else
			break;
	}
	
	while(total <= s)
	{
		total+=m;
		if(total <= s)
			count++;
		else
			break;
	}
	cout<<count<<endl;
}
