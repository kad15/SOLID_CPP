
#include<iostream.h>
#include<math.h>
class Triangle
{
  int x,y,z;
  double area;
public:
	Triangle(int i,int j,int k)
	{
	  double s;
	  x=i;y=j;z=k;
	  s=(x+y+z)/2.0;
	  area=sqrt(s*(s-x)*(s-y)*(s-z));
	}
	void disparea()
	{
	  cout<<"Area="<<area<<endl;
	}
	friend double operator+(Triangle t1,Triangle t2)
	{
	  return t1.area+t2.area;
	}
};
void main()
{
  Triangle t1(3,4,5),t2(4,5,6);
  double s;
  cout<<"t1:";t1.disparea();
  cout<<"t2:";t2.disparea();
  s=t1+t2;
  cout<<"t1+ t2 area= "<<s<<endl;
}
