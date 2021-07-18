#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() 
{
	int t,n,i,temp,p;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		deque<int>a;
		vector<int>b;
		
		for(i=0;i<n;i++) {
			cin>>temp;
			a.push_back(temp);
		}
		
		for(i=0;i<n;i++) {
			cin>>temp;
			b.push_back(temp);
		}	
		
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		
		p = n - (int)(n/4);
		int suma=0, sumb=0, count=0;
		
		for(i=0; i<p;i++) {
			suma += a[i];
			sumb += b[i];
		}
		
		if(suma >= sumb) {
			cout<<count<<endl;
			continue;
		}
		
		while(suma < sumb) {
			n++;
			a.push_front(100);
			b.push_back(0);
			if(n-(int)(n/4) > p) {
				suma += 100;
				sumb += b[p];
				p++;
			}
			else {
				suma += (100-a[p]);
			}
			count++;
		}
		
		cout<<count<<endl;
		
	}
}
