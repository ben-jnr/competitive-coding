#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std;

int main() {
	
	int t,tlimit,k,i;
	char a,b,c;
	string s;
	t=1;
	cin>>tlimit;
	
	while(t<=tlimit) {
		
		cin>>s;
		cin>>k;
		unordered_map <char, unordered_map<char,int>> m;
		unordered_map <char, unordered_set<char>> direct;
		queue<char> q, tempq, empty;
		
		for(i=0; i<k; i++) {
			cin>>a>>b;
			direct[a].insert(b);
		}
		
		for(c='A'; c<='Z'; c++) {
			int count = 0;
			q.push(c);
			unordered_set<char> visited;
			while(!q.empty()) {
				a = q.front();
				q.pop();
				if(visited.find(a) != visited.end()) {
					if(q.empty()) {
						q = tempq;
						tempq = empty;
						count++;
					}
					continue;
				}
				visited.insert(a);
				m[c][a] = count;
				for(auto u: direct[a]) {
					tempq.push(u);
				}
				if(q.empty()) {
					q = tempq;
					tempq = empty;
					count++;
				}
			}	
		}
		
		int minimum = INT_MAX;
		for(c='A'; c<='Z'; c++) {
			int count = 0;
			for(i=0; s[i]!='\0'; i++) {
				if(m[s[i]].find(c) == m[s[i]].end()) {
					count = INT_MAX;
					break;
				}	 
				count += m[s[i]][c];
			}
			minimum = min(minimum, count);
		}
		
		if(minimum == INT_MAX)
			minimum = -1;
			
		cout<<"Case #"<<t<<": "<<minimum<<endl;
		t++;
	}
}
