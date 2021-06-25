#include<iostream>
using namespace std;


int main() {
	string s;
	string sfinal;
	int length,count,i,low,high;
	cin>>s;	
	length = 1;
	low = 0;
	high = 1;

	int len = s.size();
	
	for(i=1; i<len; i++) {
		count=1;
		
		while(1) {
			if(i-count >=0 && i+count<len && s[i-count]==s[i+count])
				count++;
			else
				break;
		}
		
		if(count+count-1 > length) {
			length=count+count-1;
			low = i-count+1;
			high = i+count;
		}
		
	}
	
	for(i=1; i<len; i++) {
		count=1;
		 
		while(1) { 
			if(i-count >=0 && i+count-1<len && s[i-count]==s[i+count-1])
				count++;
			else
				break;
		}
		
		if(count+count-2 > length) {
			length=count+count-2;
			low = i-count+1;
			high = i+count-1;
		}
	}	
	
	sfinal="";
	for(i=low;i<high;i++)
		sfinal = sfinal + s[i];
	cout<<sfinal<<endl;
}
