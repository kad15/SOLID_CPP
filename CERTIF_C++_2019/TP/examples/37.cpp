
#include<iostream.h>
class Sample
{

	int n;
	public:
	
	Sample(){}
	Sample(int i){n=i;}
	friend Sample operator+(int,Sample);
	friend Sample operator+(Sample,int);


	void disp() {cout<<"n="<<n<<endl;}
};

Sample operator + (int x, Sample y)
{
 Sample temp;
  temp.n = x + y.n;
  return temp;
}

Sample operator + (Sample y, int x)
{
 Sample temp;
  temp.n = x + y.n;
  return temp;
}

void main()
{
  Sample s1(10),s2;
  s1.disp();
  s2 = s1 +10;
  s2.disp();  
  s2= operator+ (10,s1); //unusal way
  s2.disp();
  s2 = 10 + s1;  
  s2.disp();
  

  
}
