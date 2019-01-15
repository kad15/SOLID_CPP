#include<iostream.h>

struct box
{
   double dLength,dWidth,dHeight;
   double dVolume;
   double get_vol(){return dLength * dWidth * dHeight;}
   
}

 
main()
{
 		struct box a;
		a.dLength=12;
		a.dWidth=12;
		a.dHeight=12;
		cout<<a.get_vol()<<endl;
}

