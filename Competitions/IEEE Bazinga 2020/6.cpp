#include <bits/stdc++.h> 
using namespace std;  
  
int main() 
{ 
    int i,n,max1,max2,index1,index2,temp;
    cin>>n;
    max1=max2=-1;
    cin>>max1;
    index1=1;
    index2=0;
    for(i=2;i<=n;i++) {
    	cin>>temp;
    	if(temp>max1) {
    		max2 = max1;
    		max1 = temp;
    		index2 = index1;
    		index1 = i;
    	}	
    	else if(temp>max2) {
    		if(temp<max1) {
    			max2 = temp;
    			index2 = i;
    		}
    	}	
    }
    if(index2 == 0)
    	cout<<"There is no second largest count of work hours";
    else
    	cout<<max2<<"\n"<<index2;
    return 0; 
} 
