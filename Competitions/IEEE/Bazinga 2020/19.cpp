#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
  string s;
  int j,i,t,stringlen,flag,count;
  vector<int> a;
  cin>>t;
  getline(cin,s);
  for(i=0;i<t;i++) {
  	getline(cin,s);
  	stringlen = s.length();
  	for(j=1;j<stringlen;j++) {
  		if(s[0]==s[j])
  			a.push_back(j);
  	}
  	if(a.size() == 0) {
  		cout<<stringlen<<"\n";
  		continue;
  	}
  	flag=1;
  	while(flag) {
  		j=a.back();
  		a.pop_back();
  			
  	}
  }
  return 0; 
} 
