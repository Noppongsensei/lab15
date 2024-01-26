#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int x=rand()%4+1;
	if(x==1){
		a=a;
		b=b;
		c=c;
		d=d;
	}
	if(x==2){
		int q=a;
		a=b;
		b=c;
		c=d;
		d=q;
	}
	if(x==3){
		int q=a;
		int w=b;
		a=c;
		b=d;
		c=q;
		d=w;
	}
	if(x==4){
		int q=a;
		int w=b;
		int r=c;
		a=d;
		b=q;
		c=w;
		d=r;
	}
}