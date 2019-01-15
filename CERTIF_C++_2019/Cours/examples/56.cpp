assssssssssssssssssssssssssssssssssssssssssssssss#include<iostream.h>
#include<stdlib.h>

void terminate()
{
	cout<<"caught"<<endl;
}

void one()
{
	throw 3;
}
main()
{
one()	;
}

