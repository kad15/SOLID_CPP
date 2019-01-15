#include<iostream.h>

class A
{	
public:
	A(){cout<<"Constructing A\n";}
	~A(){cout<<"Constructing A\n";}
};

class B
{
public:
  B()
  {cout<<"Constructing B\n";}
  ~B()
  {cout<<"Destructing B\n";}
};

class C:public A,public B

{
public:
  C()
  {cout<<"Constructing C\n";}
  ~C()
  {cout<<"Destructing C\n";}
};

main()
{
 C ob;
 return 0;
}
