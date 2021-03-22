#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
  int n,count,i,a,b,c,d,temp1,temp2,diff;
  cin>>n;
  for(i=0;i<n;i++) {
  	priority_queue <int> q;
  	cin>>a>>b>>c>>d;
  	q.push(b);
  	q.push(c);
  	q.push(d);
  	count =0;
  	while(a>0) {
  		if(!q.empty()) {
  			temp1 = q.top();
  			q.pop();
  		}
  		else
  			break;
  		if(!q.empty()) {
  			temp2 = q.top();
  			q.pop();
  		}	
  		else 
  			break;
  		diff = temp1-temp2;
  		a -= temp2;
  		if(a>0)
  			count += temp2;
  		else
  			count += temp2 + a;	
  		if(diff != 0)
  			q.push(diff);
  	}
  	cout<<count<<"\n";
  }
} 
