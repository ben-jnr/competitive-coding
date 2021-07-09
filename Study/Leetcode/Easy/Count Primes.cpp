#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
        vector<bool> v(n, true);
        int i,j;
        
        if(n == 0 | n == 1)
        	return 0;
        
        v[0]=v[1]=!1;
        
        for(i=2;i*2<n;i++)
        	v[i*2] = !1;

        for(i=3;i*i<n;i+=2) {
        	if(v[i]) {
        		for(j=3;j*i<n;j+=2)
        			v[j*i] = !1;
        	}
        }
        
        int count=0;
        
        for(auto u:v)
        	if(u)
        		count++;
        return count;
}

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<countPrimes(n)<<"\n";
}	
