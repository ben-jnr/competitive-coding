//Move all the negative elements to one side of the array 
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,n,temp,pointer=0;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array elements: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	for(i=0;i<n;i++) {
		if(v[i]<0) {
			swap(v[i],v[pointer]);
			pointer++;
		}
	}
	for(i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}


/*
time complexity - O(n)
pointer is initially set to 0. If a negative number is found, swap the number with number at pointer index, and increement pointer value.
*/
