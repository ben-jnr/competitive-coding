#include<iostream>
using namespace std; 
typedef long long ll;

int xcord[] = {0,0,0,1,0,0,0,1,0,0,0,1,0,0,0};
int ycord[] = {0,1,0,1,0,1,0,0,0,1,0,1,0,1,0};

int xcord1[] = {0,0,1,0};
int ycord1[] = {0,1,1,1};

int xcord2[] = {0,1,1,1};
int ycord2[] = {0,0,1,0};

void reset(ll &counter, ll &x, ll &y, ll &n) {
	counter = 0;
 	if(n-y == 2)
 		++y;
 	else
 		y+=2;
 	if(y>n) {
 		if(n-x==2)
 			++x;
 		else
 			x+=2;
 		y=1;
 	}
}


int main() {
	ll i,t,n,k,x,y,counter,check,prev,j,q;
	cin>>t;
	for(i=0;i<t;i++) {
		cin>>n>>q>>k;
		j = 1;
		counter = 0;
		x = y = 1;
		while(j <= q && x<=n) {
 			prev = k;
 			
 			if(x%2==0) {
 				cout<<1<<" "<<x+xcord2[counter]<<" "<<y+ycord2[counter]<<endl;
 				cin>>k;
 				++counter;
 				++j;
 				if(k==-1)
					break;
				if(k>prev) {
					cout<<1<<" "<<x<<" "<<y<<endl;
 					cin>>k;
					cout<<1<<" "<<x+1<<" "<<y+1<<endl;
					cin>>k;
					j+=2;
	 				reset(counter,x,y,n);
				}
 			}
 			
 			else if(y%2==0) {
 				cout<<1<<" "<<x+xcord1[counter]<<" "<<y+ycord1[counter]<<endl;
 				cin>>k;
 				++counter;
 				++j;
 				if(k==-1)
					break;
				if(k>prev) {
					cout<<1<<" "<<x<<" "<<y<<endl;
 					cin>>k;
					cout<<1<<" "<<x+1<<" "<<y+1<<endl;
					cin>>k;
					j+=2;
	 				reset(counter,x,y,n);
				}
 			}
 			
 			else {			
	 			cout<<1<<" "<<x+xcord[counter]<<" "<<y+ycord[counter]<<endl;
	 			cin>>k;
	 			++counter;
	 			++j;
	 			if(k==-1)
					break;
	 			if(k>prev) {
	 				if(xcord[counter-1] == 0 && ycord[counter-1] == 0) {
	 					cout<<1<<" "<<x<<" "<<y<<endl;
	 					cin>>k;
	 					cout<<1<<" "<<x+1<<" "<<y+1<<endl;
	 					cin>>k;
	 					j+=2;
	 					reset(counter,x,y,n);
	 				}
	 			}
	 			else if(k<prev) {
	 				if(xcord[counter-1] == 0 && ycord[counter-1] == 0) {
	 					cout<<1<<" "<<x+1<<" "<<y+1<<endl;
	 					++j;
	 					cin>>k;
	 					reset(counter,x,y,n);
	 				}
	 			}
	 			else if(counter == 14) {
	 				cout<<1<<" "<<x+1<<" "<<y+1<<endl;
	 				++j;
	 				cin>>k;
	 				counter = 0;
	 				reset(counter,x,y,n);
	 			}
	 		}
		}
		check = 0;
		if(k==-1)
			break;
		cout<<2<<endl;
		for(j=0;j<n;j++) {
			for(k=0;k<n;k++) 
				cout<<1<<" ";
			cout<<endl;
		}
		cin>>check;
		if(check == -1)
			break;
	}
	return 0;
}
