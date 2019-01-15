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
	   cout<<"Constructing and the length is "<<dLength<<endl;
	   
	   dWidth = w;
	   dHeight = h;
//	   static nCount=0;
//	   nCount++;
//	   cout<<"Constructor exectued "<<nCount<<" time(s)"<<endl;
}

box::~box(void)
{
	cout<<"Decontructing, the length is "<<dLength<<endl;
//	static nCount=0;
//	nCount++;
//	cout<<"Deconstructor exectued "<<nCount<<" time(s)"<<endl;

}
   
//box x(1 ,2 ,30);

 
void display(box i)
{
	double temp=i.vol();
	cout<<"The volume is "<<temp<<endl;
}

void dis2( box  &  i)
{
	double temp=i.vol();
	cout<<"The volume is "<<temp<<endl;
}


main()
{

	    cout<<"Program begin"<<endl;
 		box a(12,12,12);
		display(a);
		cout<<endl<<endl;;
//		box b(3,2,3);
//        dis2(b);		
		cout<<"Program end"<<endl;

}

