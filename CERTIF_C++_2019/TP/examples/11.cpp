#include<iostream>
#include<iomanip>
using namespace std; 

char * scopy(char * des, char * sour)
{
	char *temp=des;
	while(*des++=*sour++);
	return temp;
}

int slen(char * str)
{
	int temp=0;
	while(*str++)
		temp++;
	return temp;
}

int main () 
{ 	
	char strName[]="ABC";
	
   int * p;
   cout<<"after definition"<<endl;
   cout<<"p is "<<p<<endl;
   cout<<"*p is "<<*p<<endl; //error hard to detect
   cout<<"&p is "<<&p<<endl;
   p=new int;
   cout<<"after allocating memory"<<endl;
   cout<<"p is "<<p<<endl;
   cout<<"*p is "<<*p<<endl;
   cout<<"&p is "<<&p<<endl;
   
   *p=12; 
 
   cout<<"after given value"<<endl;
   cout<<"p is "<<p<<endl;
   cout<<"*p is "<<*p<<endl;
   cout<<"&p is "<<&p<<endl;
   

   *p=12;
    int i;
   int * q=new int [12];
   for(i=0;i<12;i++)
	   q[i]=i;
   for( i=0;i<12;i++)
	   cout<<setw (4) <<q[i];
   cout<<endl;
   
   delete p;
   cout<<"after delete"<<endl;
   cout<<"p is "<<p<<endl;
   cout<<"*p is "<<*p<<endl;
   cout<<"&p is "<<&p<<endl;
   
 //   delete [12]q;

   

	char * str;
	str=new char [strlen(strName)+1];
	scopy(str,strName);
	cout<<str<<endl;
	cout<<slen(str)<<endl;
	return 0;
}


