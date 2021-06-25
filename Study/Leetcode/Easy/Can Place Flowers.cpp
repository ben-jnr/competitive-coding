#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
	int sum = 0, count = 0, b1 = 0, b2 = 0;
	vector<int>::iterator it = flowerbed.begin();
	for(;it != flowerbed.end(); it++)
	{
		if(*it == 0)
			count++;
		else
		{
			b2 = 1;
			sum = sum + (count - b1 - b2 + 1)/2;
			count = 0;
			b1 = 1;
			b2 = 0;
		}
		
	}
	
	sum = sum + (count - b1 - b2 + 1)/2;
	
	if(sum >= n)
		return true;
	else
		return false;       
}

int main()
{
	int num,i,n,temp;
	vector<int> flowerbed;
	cout<<"No of pots : ";
	cin>>num;
	cout<<"Arrangement : ";
	for(i=0;i<num;i++)
	{
		cin>>temp;
		flowerbed.push_back(temp);
	}
	cout<<"Requirement : ";
	cin>>n;	
	bool ans = canPlaceFlowers(flowerbed, n);
	cout<<ans<<endl;
	return 0;
}
