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
void print1(struct student *p)
{
	cout<<"ID:  "<<(*p).nId<<endl;
	cout<<"Name:"<<(*p).strName<<endl;
	cout<<"S1   "<<setw(2)<<(*p).cScore[0]<<endl;
	cout<<"S2   "<<setw(2)<<p->cScore[1]<<endl;
	cout<<"S3   "<<setw(2)<<p->cScore[2]<<"\n";
	cout<<" ";
}

void print2(struct student p)
{
	cout<<"ID:  "<<p.nId<<endl;
	cout<<"Name:"<<p.strName<<endl;
	cout<<"S1   "<<setw(2)<<p.cScore[0]<<endl;
	cout<<"S2   "<<setw(2)<<p.cScore[1]<<endl;
	cout<<"S3   "<<setw(2)<<p.cScore[2]<<endl;
	cout<<" ";
}

void print3(struct student const &p)
{
	cout<<"ID:  "<<p.nId<<endl;
	cout<<"Name:"<<p.strName<<endl;
	cout<<"S1   "<<setw(2)<<p.cScore[0]<<endl;
	cout<<"S2   "<<setw(2)<<p.cScore[1]<<endl;
	cout<<"S3   "<<setw(2)<<p.cScore[2]<<endl;
//	p.nId=12;
	cout<<" ";
}

void main()
{
	struct student stu;

	stu.nId=12345;
	strcpy(stu.strName,"John");
	stu.cScore[0]='A';
	stu.cScore[1]='B';
	stu.cScore[2]='C';
	print1(&stu);
	cout<<endl;
	print2(stu);
	cout<<endl;
	print3(stu);


}
	
	
	
	


