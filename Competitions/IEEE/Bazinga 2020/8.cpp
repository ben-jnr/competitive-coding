#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    int n,i,a,b,c,count=0,flow=0,prev;
    float time;
    priority_queue <int> q;
    cin>>n;
    for(i=0;i<n;i++) {
    	cin>>a>>b>>c;
    	float time = sqrt((a*a)+(b*b)) / c;
    	q.push(time);
    }
    while(!q.empty())
    {
    	prev = q.top();
    	flow=1;	
    	q.pop();
    	while(!q.empty() && prev == q.top()) {
    		flow++;
    		prev = q.top();
    		q.pop();
    	}
    	count += flow*(flow-1) / 2;
    }
    cout<<count;
    return 0; 
} 
