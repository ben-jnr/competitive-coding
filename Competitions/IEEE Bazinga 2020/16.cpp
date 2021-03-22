#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
   string s;
   long int l,count;
   getline(cin,s);
   while(s != "END") {
   	count =1;
   	while(1) {
   		l = s.length();
   		if(to_string(l) != s) {
   			s = to_string(l);
   			count++;
   		}
   		else
   			break;	
   	}
   	cout<<count<<"\n";	
   	getline(cin,s);
   }
   return 0; 
} 
