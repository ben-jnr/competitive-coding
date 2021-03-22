#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
   long int n,player[10],game[10],loc=0,flag=0,i;
   cin>>n;
   for(i=0;i<n;i++)
   	cin>>player[i];
   for(i=0;i<n;i++)
   	cin>>game[i];
   while(1) {
   	flag =0;
   	for(i=0;i<n;i++) {
   		if(loc % player[i] != game[i]) {
   			flag =1;
   			break;
   		}
   	}	
   	if(flag == 0) {
   		cout<<"loc is "<<loc;
 		break;
   	}
   	else
   		loc++;
   }
   return 0; 
} 
