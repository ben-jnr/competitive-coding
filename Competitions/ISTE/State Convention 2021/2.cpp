#include<iostream>
#include<math.h>
using namespace std;


int primeFactorsDouble(int n, int m) {  
    
    int count = 0;   
    
    while (n % 2 == 0 || m %2 == 0) {  
        if(m%2 == 0 && n%2 == 0) {
        	n = n/2;
        	m = m/2;
        }
        else if(m%2 == 0) {
        	count++;
        	m = m/2;
        }
        else if(n%2 == 0) {
        	count++;
        	n = n/2;
        }    
    }  
    
    int larger = max(n,m);
    for (int i = 3; i <= sqrt(larger); i=i+2) {    
    	while (n%i == 0 || m%i == 0) {  
            if(m%i == 0 && n%i == 0) {
        	n = n/i;
        	m = m/i;
            }
            else if(m%i == 0) {
        	count++;
        	m = m/i;
            }
            else if(n%i == 0) {
        	count++;
        	n = n/i;
            }     
        }  
    }  
    

    if(n != m) {
    	if (n > 2 && m>2)  
        	count+=2;
        else if(n>2)
        	count++;
        else if(m>2)
        	count++;
    }
    
    return count;
}  




int main() {
	int a,b;
	cin>>a>>b;
	cout<<primeFactorsDouble(a,b);
	return 0;
}
