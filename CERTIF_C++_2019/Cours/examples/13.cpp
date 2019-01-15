#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
struct student
{
	char strName[20];
	int nId;
	char cScore[3];
};
union stu
{
	char strName[20];
	int nId;
	char cScore[3];
};
union mof{
	char arr[4];
	int b;
}
main()
{
	cout<<sizeof(struct student)<<endl;
	cout<<sizeof(union stu)<<endl;

	union mof a;
	strcpy(a.arr,"123");
	cout<<a.b<<endl;
}
