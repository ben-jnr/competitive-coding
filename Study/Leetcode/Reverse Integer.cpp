#include<iostream>
using namespace std;

int main() {
	int x,d,rev,flag=0;
	cin>>x;
	rev=0;

	while(x>0 && x>9) {
		d = x%10;
		rev = rev*10 + d;
		x = x/10;
	}
	
	while(x<0 && x<-9) {
		d = x%10;
		rev = rev*10 + d;
		x = x/10;
	}
	
	if(rev<0) {
            if(x>-9) {
                if(rev>=-214748364) 
                    rev=(rev*10)+x;
                else
                    rev=0;
            }
            else {
                if(rev>=-214748363)
                    rev=(rev*10)+x;
                else
                    rev=0;
            }
        }
        else {
            if(x<8) {
                if(rev<=214748364) 
                    rev=(rev*10)+x;
                else
                    rev=0;
            }
            else {
                if(rev<=214748363)
                    rev=(rev*10)+x;
                else
                    rev=0;
            }
        }
	
	
	cout<<rev<<endl;
}

