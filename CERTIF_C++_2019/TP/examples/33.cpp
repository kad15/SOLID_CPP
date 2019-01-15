#include<iostream.h>

void show(void)
{
	cout<<"Welcome !";
	cout<<endl;
}
;
void show(char *str)
{
	cout<<str<<endl;
}
	
;
void show(int x)
{
	cout<<x<<endl;
}

;
main()
{
	show();
	show("Hi");
	show(123);

}
