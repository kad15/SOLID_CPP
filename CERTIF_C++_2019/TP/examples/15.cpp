#include<iostream.h>

class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
public:
   double vol();
   void   initialize(double, double , double);
   
};

 double box::vol()
{
return dLength * dWidth * dHeight;
}

void box::initialize(double l,double w,double h)
{
       dLength = l;
	   dWidth = w;
	   dHeight = h;
}

 
main()
{
 		box a;
		a.initialize(12,12,12);
		cout<<a.vol()<<endl;
//	    cout<<a.dLength<<endl;;
}

