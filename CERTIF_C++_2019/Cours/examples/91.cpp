#include<iostream>
using namespace std; 



int main () 
{ 	
	int a[][2]={{1,2},{3,4}};
	int i;
	
	int *p=& a[0][0];
	int * p1 =& a[0][0];
    int * p2 =& a[1][0]; 
	cout<<"a is "<<a<<endl;
	cout<<"p is "<<p<<endl;

	cout <<"p[1] is "<<p[1]<<endl;
	cout <<"a[1] is "<<a[1]<<endl;

	cout<<"sizeof a is "<<sizeof(a)<<endl;
	cout<<"size of p is "<< sizeof(p)<<endl;

	p++;

	cout<<"p2-p1 is "<<p2-p1<<endl;
	cout<<"Now p is"<<p<<endl;
	cout<<"Now p[1] is "<<p[1]<<endl;

    



	return 0;
}


