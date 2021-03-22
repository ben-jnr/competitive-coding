#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    long int c,h,o,g,w,cd,temp;
    cin>>c>>h>>o;
    g = min(c/6,h/12);
    g = min(g, o/6);
    c -= g*6;
    h -= g*12;
    o -= g*6;
    cd = c;
    c =0;
    o -= cd*2;
    w =h/2;
    h = h%2;
    o -= w;
    if(c == 0 && h ==0 && o == 0)
    	cout<<w<<" "<<cd<<" "<<g;
    else {
    	temp = o/12;
    	g = g-temp;
    	c += temp*6;
    	h += temp*12;
    	o += temp*6;
    	cd += c;
    	o -= c*2;
    	c =0;
    	w +=h/2;
    	o -= h/2;
    	h = h%2;
    	if(c == 0 && h ==0 && o == 0)
    		cout<<w<<" "<<cd<<" "<<g;
    	else
    		cout<<"Error";
    }
    return 0; 
} 
