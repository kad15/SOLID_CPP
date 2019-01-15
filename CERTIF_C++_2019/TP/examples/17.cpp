#include<iostream.h>

class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
public:
   double vol();
   box(double, double , double);
   
   
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}

box::box(double l,double w,double h)
{
       dLength = l;     
	   cout<<"Construction function and the width is "<<dLength<<endl;
	   
	   dWidth = w;
	   dHeight = h;
}

box x(1 ,2 ,30);
 
main()
{

	    cout<<"Program begin"<<endl;
 		box a(12,12,12);
//tru to make the constructor private 
		cout<<"End"<<endl
}

