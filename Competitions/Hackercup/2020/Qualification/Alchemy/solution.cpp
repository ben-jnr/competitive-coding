//question 2
#include<bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin;
	ofstream fout;
	int t,n,i,j;
	char a,b,c;
	string old, gen;
	fin.open("input.txt");
	fout.open("output.txt");
	getline(fin,old);
	t=stoi(old);
	for(i=0;i<t;i++) {
		getline(fin,old);
		n = stoi(old);
		getline(fin,gen);
		do{
			old = gen;
			gen = "";
			for(j=0;j+2<old.length();j++) {
				a = old[j];
				b = old[j+1];
				c = old[j+2];	
				if(a == b) {
					if(a == c)
						gen = gen + a;
					else {
						gen = gen + a;
						j=j+2;
					}	
				}
				else if(a == c) {
					gen = gen + a;
					j=j+2;
				}
				else {
					gen = gen + b;
					j=j+2;	
				}
			}
			while(j< old.length()) {
				gen = gen + old[j];
				j++;
			}
		} while(old != gen);
		fout<<"Case #"<<i+1<<": ";
		if(gen.length() == 1)
			fout<<"Y\n";
		else
			fout<<"N\n";	
	}
	fin.close();
	fout.close();
}
