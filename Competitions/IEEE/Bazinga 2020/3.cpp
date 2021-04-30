#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    int n,w,h,l;
    cin>>l;
    cin>>n;
    for(int i=0;i<n;i++) {
    	cin>>w>>h;
    	if(l==w && l==h)
    		cout<<"ACCEPTED\n";
    	else if(l>w || l>h)
    		cout<<"UPLOAD ANOTHER\n";
    	else if(w==h)
    		cout<<"ACCEPTED\n";
    	else	
    		cout<<"CROP IT\n";		
    }
    return 0; 
} 
