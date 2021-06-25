#include<iostream>
#include<vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
       	vector<int>dp;
       	int i;
       	dp.push_back(0);
       	dp.push_back(0);
       	vector<int>::iterator it= cost.begin();
       	for(i=2; it+2 != cost.end(); it++, i++)
       	{
       		dp.push_back(min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]));
       	}	
       	dp.push_back(min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]));
      	return dp[i];
}

int main()
{
	int n,temp;
	vector<int>cost;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter cost:";
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		cost.push_back(temp);
	}
	int min = minCostClimbingStairs(cost);
	cout<<"Minimum = "<<min<<endl;
}
