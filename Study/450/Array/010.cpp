/*
https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#
pgm that finds minimum possible steps to reach end of array
time complexity - O(n)
space complexity - O(n) - input only needs O(n)
program uses optimised form of BFS avoiding the use of a queue
*/

#include<iostream>
#include<climits>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	bool flag = false;
	int curr=0, end=0, count=1, maxim=INT_MIN;
	
	while(curr<n && curr<=end) {
		for(int i=curr; i<=end; i++)
			maxim = max(maxim, i+arr[i]);
		if(maxim>=n-1) {
			cout<<count<<endl;
			flag = true;
			break;
		}
		count++;
		curr = end+1;
		end = maxim;
	}
	
	if(!flag)
		cout<<-1<<endl;
	return 0;
}

