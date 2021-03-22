//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
//modify height of each tower in such a way, so as to minimise difference between highest and lowest

#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int n,i,j,k,smallest,largest,add,sub,extra,sum=0;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"elements : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter k : ";
	cin>>k;
	sort(arr,arr+n);
	smallest = min(arr[0]+k, arr[n-1]-k);
	largest = max(arr[0]+k, arr[n-1]-k);
	for(i=1; arr[i]-k < 0 && i < n; i++) 
		largest = max(arr[i]+k,largest);
	extra = smallest - (arr[i]-k);
	for(;i<n-1;i++) {
		add = arr[i]+k;
		sub = arr[i]-k;
		if(sub>=smallest)
			break;
		if(add<=largest)
			continue;
		sum += add - largest;
		if(i<n-2)
			extra = min(extra, sum+arr[i+1]-k);
		else 
			extra = min(extra, sum);
	}		
	if(largest-smallest > arr[n-1]-arr[0])
		cout<<arr[n-1]-arr[0]<<endl;
	else
		cout<<largest-smallest+extra<<endl;
	return 0;
}




/*

//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
//modify height of each tower in such a way, so as to minimise difference between highest and lowest

#include<iostream>
#include<algorithm>
#include<set>
#include<cstring>
using namespace std;


int main() {
	int n,i,k,count=0,smallest,largest;
	set<pair<int,int>> s;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	int hash[n];
	memset(hash,0,sizeof(hash));
	cout<<"elements : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter k : ";
	cin>>k;
	for(i=0;i<n;i++) {
		if(arr[i]-k>=0)
			s.insert({arr[i]-k, i});
		s.insert({arr[i]+k, i});
	}
	for(auto u:s) {
		cout<<u.first<<u.second<<endl;
	}	
	smallest = s.begin()->first;
	for(auto u:s) {
		if(!hash[u.second])
			count++;
		hash[u.second]++;
		if(count == n) {
			largest = u.first;
			break;
		}
	}
	for(auto u:s) {
		if(hash[u.second]>1)
			hash[u.second]--;
		if(hash[u.second] == 1) {
			smallest = u.first;
			break;
		}
	}
	cout<<largest-smallest<<"\n";
	return 0;
}

*/
