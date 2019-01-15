
#include<iostream.h>
#include<string.h>
class Person
{
  int no;
  char name[10];
  int deg;
public:
friend void main();
};

void main()
{
  Person obj;
  obj.no=1000;
  strcpy(obj.name,"ABC");
  obj.deg=4;
  
  cout<<"Student: "<<obj.name<<endl;
  
}
