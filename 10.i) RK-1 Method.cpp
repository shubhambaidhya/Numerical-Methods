//Solution of Ordinary Diffrerential Equations
//RK-1 Method
#include<iostream>
#include<conio.h>
using namespace std;

#define f(x,y) (x-y)/2

int main(){
	float x0, y0, xn, h, m, x1, y1;
	int i, n;
	cout<<"Enter the initial condition (x0,y0): "<<endl;
	cout<<"x0: "; cin>>x0;
	cout<<"y0: "; cin>>y0;
	cout<<"Enter the step size: ";
	cin>>h;
	cout<<"Enter xn where functional value is to be found: ";
	cin>>xn;
	
	n=(xn-x0)/h;
	
	for(i=1;i<=n;i++){
			m= f(x0,y0);
			y1= y0+m*h;
			x1= x0+h;
			y0= y1;
			x0= x1;
	}
	
	cout<<"The functional value at xn= "<<xn<<" is: "<<y0<<endl;
	
	getch();
	return 0;
}
