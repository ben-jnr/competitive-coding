//Write a program to cyclically rotate an array by one.
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,temp,i;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array elements: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	
	
	
	//method1
	temp = v.back();
	v.pop_back();
	v.insert(v.begin(),temp);
	for(auto u:v)
		cout<<u<<" ";
	cout<<endl;
	
	
	
	//method2
	temp = v.back();
	for(i=n-1;i>0;i--)
		v[i] = v[i-1];
	v[0] = temp;
	for(auto u:v)
		cout<<u<<" ";
	cout<<endl;
	
	
	return 0; 
}



/*
Time complexity - O(n)
2 methods are used here :
In the first method, the last element is read using back(), and then inserted to the start of the vector using insert() which takes O(n) time
In the second method, the last element is read using back(), all elements are moved one index ahead and the previous last value is in v[0].
*/


