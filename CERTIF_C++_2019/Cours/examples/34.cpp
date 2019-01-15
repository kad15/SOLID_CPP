
#include<iostream.h>
class Sample
{

	int n;
	public:
	
	Sample(){}
	Sample(int i){n=i;}
	Sample operator-(Sample &);
	Sample operator+(Sample &);
	void disp() {cout<<"n="<<n<<endl;}
};
Sample Sample::operator-(Sample &s2)
{
  Sample temp;
  temp.n = n - s2.n;
  return temp; 
}
Sample Sample::operator + (Sample &s2)
{
 Sample temp;
  temp.n = n + s2.n;
  return temp;
}
void main()
{
  Sample s1(10),s2(20),s3,s4;
  s1.disp();
  s1.operator +(s2); //+ is just a special member function
  s1.disp();
  s3 = s1.operator +(s2); //unusal way  
  s3.disp();
  s3 = s1 + s2;//the usual way 
  s3.disp();
  
}
