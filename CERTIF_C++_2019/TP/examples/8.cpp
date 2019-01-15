#include<iostream>
using namespace std; 
const int N=5;


void change1(int x [N]); 

int main () 
{ 	
	int a[N];
	int i;
	for (i=0;i<N;i++)
	{
		a[i]=1;
	}

	cout<<"A is "<<sizeof(a)<<endl;

	for (i=0;i<N;i++)
	{
		cout<<a[i];
	}

	cout<<endl;

	change1(a); 


	
	for (i=0;i<N;i++)
	{
		cout<<a[i];
	}

	cout<<endl;
	 
	return 0;
}

void change1(int x [N]) 
{ 
	for (int i=0;i<N;i++)
		x[i]+=1;	
}

