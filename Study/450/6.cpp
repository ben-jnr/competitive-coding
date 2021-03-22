//Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;


int main() {
	set<int> s1, s2, su, si;
	int n1,n2,i,temp;
	
	
	cout<<"enter size 1: ";
	cin>>n1;
	cout<<"enter set 1: ";
	for(i=0;i<n1;i++) {
		cin>>temp;
		s1.insert(temp);
	}
	
	
	cout<<"enter size 2: ";
	cin>>n2;
	cout<<"enter set 2: ";
	for(i=0;i<n2;i++) {
		cin>>temp;
		s2.insert(temp);
	}
	
	
	auto p1=s1.begin();
	auto p2=s2.begin();
	
	
	while(p1!=s1.end() && p2!=s2.end()) {
		if(*p1 == *p2) {
			si.insert(*p1);
			su.insert(*p1);
			p1++;
			p2++;
		}
		else if(*p1<*p2) {
			su.insert(*p1);
			p1++;
		}
		else {
			su.insert(*p2);
			p2++;
		}
	}
	
	
	while(p1 != s1.end()) {
		su.insert(*p1);
		p1++;
	}
	
	
	while(p2 != s2.end()) {
		su.insert(*p2);
		p2++;
	}
	
	
	cout<<"union: ";
	for(auto s:su)
		cout<<s<<" ";
	cout<<endl<<"intersection: ";
	for(auto s:si)
		cout<<s<<" ";
	cout<<endl;
	return 0;
}



/*
Time complexity - O(nLogn + mLogm + m + n) = O(nLogn)
This is because sets are used here to avoid redundancy
Hence, time to insert elements into set1 = O(nLogn) and O(mLogm) for 2nd set
splitting into union and intersection = O(m + n)
Method used is similar to merge sort because elements are in sorted order.


If vectors are used instead of sets, uniqueness of elements and ascending or descending order must be maintained.
Time complexity - O(m+n)
*/

