//find Largest sum contiguous Subarray
//Kadane's Algorithm
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
	int curr_max = v[0];
	int max_sum = v[0];
	for(i=1;i<n;i++) {
		curr_max = max(v[i], curr_max + v[i]);
		max_sum = max(max_sum, curr_max);			
	}
	cout<<"max contiguous sub array sum: "<<max_sum<<endl;
	return 0;
}



/*
The algorithm used is called Kadane's algorithm
Time Complexity - O(n)

Logic:
curr_max maintains the sum of contiguous locations. It keeps on adding the next element to itself, until the next element happens to be greater than the running sum (happens when a positive number or 0 approaches when curr_max < 0). In this case, the continuity is broken and curr_max is set to the incoming element and a new running sum begins.
max_sum is the maximum contiguous sub array sum. It is checked with curr_sum in every iteration. At any instant if curr_sum > max_sum, then we set max_sum to curr_sum.
*/


