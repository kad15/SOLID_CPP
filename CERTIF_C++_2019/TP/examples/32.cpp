
#include<iostream.h>
class B;
class A
{
  int i;
  friend B;
  void disp(){cout<<i<<endl;}
};
class B
{
public:
	void set(int n)
	{
	  A a;
	  a.i=n;    
	  a.disp(); 
	}
};
void main()
{
  B b;
  b.set(2);
  b.set(100);
}
