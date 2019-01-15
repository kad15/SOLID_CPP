
#include<iostream.h>
class Sample
{
  int n;
public:
	Sample(){}
	Sample(int m){n=m;}
	friend void square(Sample &); // try to comment this line
	void disp()
	{
	  cout<<"n="<<n<<endl;
	}
};

void square (Sample & s)
{
	  s.n=s.n*s.n;
}
	
void main()
{
  Sample a(10);
  square(a);
  a.disp();
}

/*
n=100
*/