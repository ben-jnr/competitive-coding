#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;

ll p,i,t,n;
ll prime[1000001],count[1000001];

void SieveOfEratosthenes() {
	memset(prime, 0, 1000001);
    	for (p=2; p*p <= 1000001; p++) {
        	if (!prime[p]) {
        	    for (i=p*2; i<=1000001; i+=p)
        	        prime[i] = 1;
        	}
    	}
    	count[0] = count[1] = count[2] = count[3] = count[4] = 0;
    	for(i=5;i<=1000001;i++) {
    		if(!prime[i] && !prime[i-2]) {
    			count[i]=count[i-1]+1;
    		}
    		else {
    			count[i] = count[i-1];
    		}
    	}   	
    	cin>>t;
    	while(t) {
		cin>>n;
		cout<<count[n]<<endl;
		t--;
	}   		
}



int main() {
	SieveOfEratosthenes();
	return 0;
}
