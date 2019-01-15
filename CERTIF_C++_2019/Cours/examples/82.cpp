#include<iostream>
using namespace std; 

void change(int * a, int * b);

int main () 
{ 	
	int *p;
	int a;
	a=10;
	cout<<"a is "<<a<<endl;

	p=&a;
	cout<<"p is "<<p<<endl;
	cout<<"*p is "<<*p<<endl;

	*p=7;
	
	cout<<"a is "<<a<<endl;
	cout<<"*p is "<<*p<<endl;

	int b=1;
	b=*p;

	cout<<"b is "<<b<<endl;

	int c=2;
	
	cout<<"Now a is "<<a<<" and c is "<<c<<endl;

    change(&a,&c);

	cout<<"After, a is "<<a<<" and c is "<<c<<" "<<endl;

	int *x;
	cout<<*x;
	*x=12;
	cout<<*x;

	return 0;
}

void change(int * a, int * b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}



