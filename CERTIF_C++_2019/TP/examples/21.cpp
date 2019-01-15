#include<iostream.h>
#include<string.h>
#include<stdlib.h>
class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
   char * strName;
public:
   double vol();
// box(char [],double, double , double);

   box(char []="default",double =0 ,double =0,double= 0); //constructor with defalut value;
   ~box(void); //deconstructot
   
   
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}





box::box(char name [],double l,double w,double h)
{
       dLength = l;     
	   
	   dWidth = w;
	   dHeight = h;
	   int len=strlen(name);
	   strName=new char[len+1];
	   strcpy(strName,name);
	   cout<<"Constructing "<<name<<endl;

//	   static nCount=0;
//	   nCount++;
//	   cout<<"Constructor exectued "<<nCount<<" time(s)"<<endl;
}

box::~box(void)
{
	cout<<strName<<" deconstructed"<<endl;
	delete [] strName;
	
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

const N=5;
main()
{
	cout<<"Beginn"<<endl;

	
	box *arrB=new box("Test",1,2,3);
	delete arrB;
 
   // dis2(*(new box));


	box test("ok");

	display(test);
	cout<<"End"<<endl;

}

