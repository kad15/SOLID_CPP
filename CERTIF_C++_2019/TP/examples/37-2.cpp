
#include<iostream.h>
class Sample
{
  int n;
public:
	Sample(int i){n=i;}
	operator++(){n++;}//prefix
	operator++(int){n+=2;}//suffix
    void disp()
	{
	  cout<<"n="<<n<<endl;
	}
};
void main()
{
  Sample A(2),B(2);
  A++;
  ++B;
  A.disp();
  B.disp();
}
