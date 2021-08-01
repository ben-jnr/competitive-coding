#include<iostream>

int main() {
	long long t,x,y;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld%lld",&x,&y);
		if(y=0) {
			if(x==1)
				printf("Chef\n");
			else
				printf("Divyam\n");
		}
		if(x>2)
			printf("Divyam\n");
		else
			printf("Chef\n");
	}
	return 0;
}
