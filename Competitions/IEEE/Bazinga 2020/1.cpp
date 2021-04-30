#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
  int t,n,count,diff,temp,a,b;
  cin>>t;
  for(int i=0;i<t;i++) {
  	cin>>n;
  	count =0;
  	for(int j=0;j<n;j++) {
  		cin>>a>>b;
  		if(a==15 && b==15) {
  			b -=2;
  			a -=1;
  			count+=1;
  		}
  		if(b>a)
  			swap(a,b);
  		diff = a-b;
  		if(diff >= 3) {
  			temp = diff/3;
  			count += temp;
  			a = a - (2*temp);
  			b = b+ temp;
  			diff = a-b;
  		}	
  		if(a>2 || b>2) {
  			if(diff == 2)
  				count += (a-2)*2 -1;
  			else
  				count += (a-2)*2;
  		}
  	}
  	if(count%2==0)
  		cout<<"Second\n";
  	else
  		cout<<"First\n";	
  }
  return 0; 
} 
