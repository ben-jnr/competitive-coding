#include<iostream>
using namespace std;


int main() 
{
	long int t,a,b;
	scanf("%ld", &t);
	while(t--) 
	{
		scanf("%ld %ld", &a,&b);
		if(b & (b-1))
			printf("No\n");
		else
			printf("Yes\n");
	}
}
