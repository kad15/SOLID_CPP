
#include<iostream.h>
class Sample
{

	int n;
	public:
	
	Sample(){}
	Sample(int i){n=i;}
	Sample operator=(Sample &);

	void disp() {cout<<"n="<<n<<endl;}
};
Sample Sample::operator=(Sample &s2)
{
  n = s2.n;
  cout<<"using =  "<<endl;
  return *this; 
}

void main()
{
  Sample s1(10),s2(20),s3;
  s1.disp();
  s1.operator=(s2);
  s1.disp();
  s1=s2;
  s1.disp();
  s3=s2=s1; // (s3.operator =(s2.operator =(s1))
  Sample s4=s1;


  
}

/*
n=10
using =
n=20
using =
n=20
using =
using =
  */

