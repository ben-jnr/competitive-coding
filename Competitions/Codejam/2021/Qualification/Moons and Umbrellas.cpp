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


int main() {
	ll t,tlimit,x,y,cost,i,count,temp;
	char prev;
	string s;
	cin>>tlimit;
	t=0;
	while(t<tlimit) {
		cin>>x>>y>>s;
		prev = '?';
		cost=0;
		
		for(i=0;s[i]!='\0';i++) {
			if(s[i] == 'C' && s[i+1] == 'J')
				cost += x;
			else if(s[i] == 'J' && s[i+1] == 'C')
				cost += y;
			else if(s[i] == '?') {
				count=1;
				while(s[i+1] != '\0' && s[i+1] == '?') { 
					count++;
					i++;
				}
				
				if(x>=0 && y>=0) {
					if(prev == 'C' && s[i+1] == 'J')
						cost+=x;
					if(prev == 'J' && s[i+1] == 'C')
						cost+=y;
				}
				
				else {
					temp = 0;
					if(prev == s[i+1])
						temp = min( (x+y)*((count+1)/2) , ll(0) );
					else {
						if(prev == 'C' && s[i+1] == 'J')
							temp = min( x*((count+2)/2) + y*(count/2) , x);
						else if(prev == 'J' && s[i+1] == 'C')
							temp = min( y*((count+2)/2) + x*(count/2) , y);
						else if((prev == 'C' && s[i+1] == '\0') || (prev == '?' && s[i+1] == 'J')) {
							count--;
							temp= min(ll(0),x); 
							temp = min( temp, (x+y)*((count+1)/2) );
							temp = min( temp, x*((count+2)/2) + y*(count/2) );	
						}
						else if((prev == 'J' && s[i+1] == '\0') || (prev == '?' && s[i+1] == 'C')) {
							count--;
							temp= min(ll(0),y); 
							temp = min( temp, (x+y)*((count+1)/2) );
							temp = min( temp,  y*((count+2)/2) + x*(count/2) );	
						}
						else if(prev == '?' && s[i+1] == '\0') {
							count = count-2;
							temp = min(ll(0), x);
							temp = min(temp, y);
							temp = min(temp, (x+y)*((count+1)/2));
							temp = min(temp, x*((count+2)/2) + y*(count/2) );
							temp = min(temp, y*((count+2)/2) + x*(count/2) );
						}
					}
					cost += temp;
				}
			}
			
			if(s[i] != '?')
				prev = s[i];
		}	
		cout<<"Case #"<<t+1<<": "<<cost<<endl;
		t++;
	}
}
