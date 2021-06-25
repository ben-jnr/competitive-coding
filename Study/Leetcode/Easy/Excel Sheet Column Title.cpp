#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string convertToTitle(int colnum) {
	string s;
	
	int d=0;
	
	while(colnum)
	{
		d = colnum % 26;
		colnum = colnum/26;
		if(d == 0)
		{
			d = 26;
			colnum--;
		}
		s.push_back((char)(d + 64)); 
	}
	reverse(s.begin(), s.end());
	return (s);
}

int main()
{
	
	int columnNumber;
	cout<<"Column Number : ";	
	cin>>columnNumber;
	string s = convertToTitle(columnNumber);
	cout<<s<<endl;
	return 0;
	
}
