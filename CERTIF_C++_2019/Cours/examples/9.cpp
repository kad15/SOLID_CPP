#include<iostream.h>

int main () 
{ 	
	int a[]={1,2,3,4,5};
	int i;
	
	int *p=a;

	cout<<"a is "<<a<<endl;
	cout<<"p is "<<p<<endl;

	cout <<"p[1] is "<<p[1]<<endl;
	cout <<"a[1] is "<<a[1]<<endl;
	cout<<"*(a+3) is "<<*(a+3)<<endl;
	cout<<"*(p+2) is "<<*(p+2)<<endl;



	cout<<"sizeof a is "<<sizeof(a)<<endl;
	cout<<"size of p is "<< sizeof(p)<<endl;

	p++;
	cout<<"p++"<<endl;
	cout<<"Now p is"<<p<<endl;
	cout<<"Now p[1] is "<<p[1]<<endl;

	int * q=p;
	q+=1;

	cout<<"q[0] is "<<q[0]<<endl;
	cout<<"q[1] is "<<q[1]<<endl;

    cout<<"p is "<<p<<endl;
	cout<<"q is "<<q<<endl;

	cout <<"q - p is "<<(q-p)<<endl;

    cout<<"&a is "<<&a<<" and a is "<<a<<endl;
	
	for (i=0;i<sizeof(a)/sizeof(int);i++)
	{
		a[i]=1;
	}

	return 0;
}


