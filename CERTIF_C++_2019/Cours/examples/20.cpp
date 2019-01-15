#include<iostream.h>
#include<string.h>

class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
   char * strName;
public:
   double vol();
   box(char [],double, double , double);
   ~box(void);
   
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}

box::box(char name [],double l,double w,double h)
{
       dLength = l;     
	   cout<<"Constructing and the length is "<<dLength<<endl;
	   
	   dWidth = w;
	   dHeight = h;
	   int len=strlen(name);
	   strName=new char[len+1];
	   strcpy(strName,name);

//	   static nCount=0;
//	   nCount++;
//	   cout<<"Constructor exectued "<<nCount<<" time(s)"<<endl;
}

box::~box(void)
{
	cout<<"Decontructing, the length is "<<dLength<<endl;
	cout<<strName<<" deleted"<<endl;
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


main()
{

	    cout<<"Program begin"<<endl;
 		box a("a",12,12,12);
		display(a);
		cout<<endl<<endl;;
		box b("b",3,2,3);
        dis2(b);		
/*		cout<<a.vol()<<endl;
		cout<<b.vol()<<endl;
//	    cout<<a.dLength<<endl;;*/
		cout<<"Program end"<<endl;

}

