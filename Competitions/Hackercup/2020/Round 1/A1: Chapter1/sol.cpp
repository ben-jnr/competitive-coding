#include <bits/stdc++.h> 
using namespace std;  
  
unsigned long long n,k,al,bl,cl,dl,ah,bh,ch,dh,product,temp;
int t,i,w,j;
int main() 
{ 
  cin>>t;
  for(i=0;i<t;i++) {
  	product =1;
  	vector <unsigned long long> l,h,p;
  	priority_queue <pair<unsigned long long,unsigned long long>> q;
  	cin>>n>>k>>w;
  	for(j=0;j<k;j++) {
  		cin>>temp;
  		l.push_back(temp);
  	}
  	cin>>al>>bl>>cl>>dl;
  	for(j=0;j<k;j++) {
  		cin>>temp;
  		h.push_back(temp);;
  	}
  	cin>>ah>>bh>>ch>>dh;
  	for(j=k;j<n;j++) {
  		l.push_back((( (al*l[j-2]) + (bl*l[j-1]) + cl )  % dl)+1);
  		h.push_back((( (ah*h[j-2]) + (bh*h[j-1]) + ch )  % dh)+1);
  	}
  	p.push_back(2*(h[0]+w));
  	q.push(make_pair(h[0],l[0]+w));
  	for(j=1;j<n;j++) {
  		while(l[j] > q.top().second && !q.empty())
  			q.pop();
  		if(!q.empty()) {
  			if(q.top().first >= h[j])
  				p.push_back(p[j-1] + (2*(l[j]-l[j-1])));
  			else
  				p.push_back(p[j-1] + (2*(l[j]-l[j-1])) + 2*(h[j] - q.top().first));
  		}	
  		else
  			p.push_back(p[j-1] + 2* (h[j] + w));
  		q.push(make_pair(h[j],l[j]+w));
  	}
  	for(j=0;j<n;j++)
  		product = ((product % 1000000007)*(p[j] % 1000000007)) % 1000000007;
  	cout<<"Case #"<<(i+1)<<": "<<product<<"\n";	
  }
  return 0; 
} 
