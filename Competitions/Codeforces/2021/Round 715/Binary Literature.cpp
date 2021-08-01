#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;


int main() {
	ll t,n,p1,p2,i,s10,s11,s20,s21,s30,s31;
	cin>>t;
	string s1,s2,s3,select1,select2;
	char select;
	while(t--) {
	
		vector<char> str;
		cin>>n;
		cin>>s1>>s2>>s3;
		
		
		s10 = s11 = s20 = s21 = s30 = s31 = 0;
		for(i=0;s1[i] != '\0';i++) {
			if(s1[i] == '0')
				s10++;
			else
				s11++;
			if(s2[i] == '0')
				s20++;
			else
				s21++;
			if(s3[i] == '0')
				s30++;
			else
				s31++;	
		}
		
		
		if(s10 >= n && s20 >= n) {
			select1 = s1;
			select2 = s2;
			select = '0';
		}
		else if(s11 >= n && s21 >= n) {
			select1 = s1;
			select2 = s2;
			select = '1';
		}
		else if(s10 >= n && s30 >= n) {
			select1 = s1;
			select2 = s3;
			select = '0';
		}
		else if(s11 >= n && s31 >= n) {
			select1 = s1;
			select2 = s3;
			select = '1';
		}
		else if(s20 >= n && s30 >= n) {
			select1 = s2;
			select2 = s3;
			select = '0';
		}
		else if(s21 >= n && s31 >= n) {
			select1 = s2;
			select2 = s3;
			select = '1';
		}
		
		
		
		p1 = p2 = i = 0;
		while(p1 < 2*n && p2 < 2*n) 
		{
			if(select1[p1] == select2[p2]) {
				str.push_back(select1[p1]);
				p2++;
				p1++;
			}
			else if(select1[p1] == select) {
				str.push_back(select2[p2]);
				p2++;
			}
			else {
				str.push_back(select1[p1]);
				p1++;
			}
			i++;
		}
		
		
		while(p1 < 2*n) {
			str.push_back(select1[p1]);
			p1++;
			i++;
		}
		
		while(p2 < 2*n) {
			str.push_back(select2[p2]);
			p2++;
			i++;
		}
		
		while(i<3*n) {
			str.push_back('1');
			i++;
		}
		
		
		for(auto u:str)
			cout<<u;
		cout<<endl;
		
	}
}
