#include<iostream.h>

class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
public:
   double vol();
   box(double, double , double);
   ~box(void);
   
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}

box::box(double l,double w,double h)
{
       dLength = l;     
	   cout<<"Construction function and the length is "<<dLength<<endl;
	   
	   dWidth = w;
	   dHeight = h;
}

box::~box(void)
{
	cout<<"Decontructing, the length is "<<dLength<<endl;

}
   
box x(1 ,2 ,30);
 
main()
{

	    cout<<"Program begin"<<endl;
 		box a(12,12,12);
/*		box b(3,2,3);
		
		cout<<a.vol()<<endl;
		cout<<b.vol()<<endl;
//	    cout<<a.dLength<<endl;;*/
		cout<<"Program end"<<endl;

}

