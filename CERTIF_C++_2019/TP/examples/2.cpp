#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int l;
	i=10;
	j=k=l=20;  //j=(k=(i=20))
	cout<<"i="<<i<<endl;
	cout<<"k="<<k<<endl;
	cout<<"l="<<l<<endl;
	i+=10;     //i = i + 10;
	i++;       //i = i + 1;
	cout << "i="<<i<<endl;
}     
