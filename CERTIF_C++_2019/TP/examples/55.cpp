#include<iostream.h>
class myexception{};

void two();

void one()
{
	cout<<"in one, about to call two"<<endl;
	two();
	cout<<"retrun from one"<<endl;
}
void two()
{
	cout<<"in two"<<endl;
	throw myexception();
}
main()
{
	try 
	{
		one();
	}
	catch (myexception x)
	{
		cout<<"caught"<<endl;
	}
}
	