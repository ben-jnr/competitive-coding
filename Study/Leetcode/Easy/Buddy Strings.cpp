#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i, count=0, j=0;
	int hash[26] = {0};
	vector<int> diff;
	string s, goal;
	cin>>s;
	cin>>goal;
		
	for(i=0; s[i]!='\0' && goal[i]!='\0'; i++)
	{
		if(s[i] == goal[i])
		{
			hash[((int)s[i]) - 97]++;
		}
		else
		{
			count++;
			if(count > 2)
				break;
			diff.push_back(i);
		}
	}
	
	if(s[i] != '\0' || goal[i] != '\0')
		printf("false\n");
		
	else if(count == 0)
	{
		for(i=0;i<26;i++)
		{
			if(hash[i] > 1)
			{
				printf("true\n");
				break;
			}
		}
		if(i == 26)
			printf("false\n");
	}
				
	else if(count == 2)
	{
		if(s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]])
			printf("true\n");
		else
			printf("false\n");
	}
	
	else
		printf("false\n");
	
	return 0;	
}
