
#include<iostream.h>
class Sample
{

	int n;
	public:
	
	Sample(){}
	Sample(int i){n=i;}
	Sample operator+(int);
	void disp() {cout<<"n="<<n<<endl;}
};

Sample Sample::operator + (int x)
{
 Sample temp;
  temp.n = n + x;
  return temp;
}
void main()
{
  Sample s1(10),s2;
  s1.disp();
  s1.operator +(10);
  s1.disp();
  s2 = s1 +10;
  s2.disp();
  s2 = 10 + s1;  
  s2.disp();
  

  
}
