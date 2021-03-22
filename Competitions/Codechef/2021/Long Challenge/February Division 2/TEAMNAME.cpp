#include<iostream>
#include<map>
#include<set>
using namespace std;
typedef long long ll;

int main() {
	ll t,n,i,count;
	string temp;
	cin>>t;
	while(t--) {
		cin>>n;
		count = 0;
		map<string,int> s;
		map<char,int> c;
		map<char,map<char, set<string>>> track;
		for(i=0;i<n;i++) {
			cin>>temp;
			s.insert({temp,1});
			c[temp[0]]++;
		}
		for(auto u:s) {
			temp = u.first;
			for(auto v:c) {
				if(v.first > u.first[0]) {
					temp[0] = v.first;
					if(s.find(temp) == s.end()) {
						count += 2*v.second;
						track[u.first[0]][v.first].insert(u.first);	
					}
				}
				else if(v.first < u.first[0]) {
					temp[0] = v.first;
					if(s.find(temp) != s.end())
						if(track.find(v.first) != track.end())
							if(track[v.first].find(u.first[0]) != track[v.first].end())
								count-=2*track[v.first][u.first[0]].size();
				}
			} 
		}
		cout<<count<<endl;
	}
	return 0;
}
