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


 
main()
{
 		box a(12,12,12);
		box b(3,2,3);
		
		cout<<a.vol()<<endl;
		cout<<b.vol()<<endl;
//	    cout<<a.dLength<<endl;;
}

