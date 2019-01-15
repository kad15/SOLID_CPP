#include<iostream.h>

struct box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
//public:
   double get_vol(){return dLength * dWidth * dHeight;}
   void   initialize(double l, double w, double h)
   {
	   dLength = l;
	   dWidth = w;
	   dHeight = h;
   }

}

 
main()
{
 		struct box a;
		a.initialize(1.0,2.123,3.1416);
		cout<<a.get_vol()<<endl;
//	    cout<<a.dLength<<endl;;
}

