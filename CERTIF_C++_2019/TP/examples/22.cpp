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

   box(char []="default",double =0 ,double =0,double= 0); //constructor with defalut value;
   ~box(void); //deconstructot
   box(const box & c);//copy constructor
   
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}

box::box(const box & c)
{
	dLength = c.dLength;
	dWidth = c.dWidth;
	dHeight = c.dHeight;
	int len=strlen(c.strName);
	strName=new char[len+1];
	strcpy(strName,c.strName);
	cout<<"Cpoying "<<strName<<endl;
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

const int N=5;
main()
{
	cout<<"Beginn"<<endl;

	
	box a("A");
	display(a);
	
/*	cout<<"Now B ";
	box b(a);

	cout<<"Now C ";
	box c=a;

	box xx; */
//	b=xx; //wrong here for VC++; 
	
	

    cout<<"End"<<endl;

}

