#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

ll recur(int prev, int node, ll ounces[], unordered_map<int, vector<int>> m) {
	ll maximum = ounces[node];
	for(int i=0; i<m[node].size(); i++) {
		if(m[node][i] == prev) continue;
		maximum = max(maximum, ounces[node] + recur(node, m[node][i], ounces, m));
	}
	return maximum;
}

int main() {

	int t,tlimit,i,a,b,n;
	t=1;
	cin>>tlimit;
	
	while(t<=tlimit) {
		
		cin>>n;
		ll ounces[n+1];
		unordered_map<int, vector<int>> m;
		for(i=1; i<=n; i++)
			cin>>ounces[i];
			
		for(i=1; i<=n-1; i++) {
			cin>>a>>b;
			m[a].push_back(b);
			m[b].push_back(a);
		}
		
		vector<ll> possible;
		for(i=0; i<m[1].size(); i++)
			possible.push_back(recur(1, m[1][i], ounces, m));
		
		sort(possible.rbegin(), possible.rend());
		ll maximum = 0;
		if(possible.size() >= 2)
			maximum = maximum + ounces[1] + possible[0] + possible[1];
		else if(possible.size() == 1)
			maximum = maximum + ounces[1] + possible[0];
		else
			maximum = maximum + ounces[1];	
		
		cout<<"Case #"<<t<<": "<<maximum<<endl;
		t++;
	}

}
