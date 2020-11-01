//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,temp,n,fwd,bwd;
	vector<int> v;
	cout<<"enter size: ";
	cin>>n;
	cout<<"enter array containing only 0,1 and 2: ";
	for(i=0;i<n;i++) {
		cin>>temp;
		v.push_back(temp);
	}
	fwd = 0;
	bwd = n-1;
	i = 0;
	while(i<=bwd) {
		switch(v[i]) {
			case 0: swap(v[fwd++],v[i++]);
				break;
			case 1: i++;
				break;
			case 2: swap(v[bwd--],v[i]);
				break;
			default: cout<<"invalid character changed to 0\n";
				 v[i]=0;
				 break;
		}
	}
	for(int j=0;j<n;j++)
		cout<<v[j]<<" ";
	cout<<endl;
	return 0;
}



/*
Time complexity - O(n)
3 variables are maintained, i-current location, fwd-forward moving pointer and bwd-backward moving pointer
if v[i] = 0, swap v[fwd] with v[i]'s value and increement both fwd and i
else if v[i] = 1, increement i
else if v[i] = 2, swap v[bwd] with v[i] and decreement bwd. i is not decreemented because we now have an unchecked value at i
continue till i<=bwd, because all values after bwd are already analysed


alternative method to do in O(n) would be to use an algorithm similar to counting sort. Count the number of 0's,1's and 2's and then write the characters into the array using the count values.
*/





