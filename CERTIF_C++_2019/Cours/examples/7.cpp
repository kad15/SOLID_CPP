#include<iostream>
using namespace std; 

void  swap1(int,int);
void  swap2(int &,int &); 

int main () 
{ 	
	int a=1,b=2;
	cout << "A is " <<a<<" and B is "<<b<<endl;
	

	swap1(a,b); 
	cout << "A is " <<a<<" and B is "<<b<<endl;
	swap2(a,b); 
	cout << "A is " <<a<<" and B is "<<b<<endl;
	
}

void swap1(int x,int y) 
{ 
	int temp=x;
	x = y;
	y=temp;
}


void swap2(int& x,int& y) 
{ 
	int temp=x;
	x = y;
	y=temp;
}
