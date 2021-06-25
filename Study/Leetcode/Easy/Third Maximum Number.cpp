#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int thirdMax(vector<int>& nums) {
	int i;
	vector<int>::iterator vit = nums.begin();
	vector<int> order;
	unordered_map<int,int> m;
	
	for(i=0; i<3;)
	{
		if(m.find(*vit) == m.end())
		{
			m[*vit] = 1;
			order.push_back(*vit);
			i++;
		}
		vit++;
		if(vit == nums.end())
			break;
	}
	
	sort(order.begin(), order.end());
	
	if(vit == nums.end())
	{
		if(i == 3)
			return(order[0]);
		else
			return(order[i-1]);
	}
	
	for(; vit != nums.end(); vit++)
	{
		if(m.find(*vit) == m.end())
		{
			m[*vit] = 1;
			if(*vit > order[0])
			{
				if(*vit > order[1])
				{
					if(*vit > order[2])
					{
						order[0] = order[1];
						order[1] = order[2];
						order[2] = *vit;
					}
					else
					{
						order[0] = order[1];
						order[1] = *vit;
					}
				}
				else
				{
					order[0] = *vit;
				}
			}
		}
	}
	
	return order[0];
}

int main()
{
	int i,n;
	int temp;
	vector<int> nums;
	cout<<"enter n:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		nums.push_back(temp);
	}	
	int num = thirdMax(nums);
	cout<<num<<endl;
	return 1;
}
