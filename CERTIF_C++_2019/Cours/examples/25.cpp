#include<iostream.h>
#include<iomanip.h>
const int MAX=80;
class person
{
private:
   char strName[MAX];
public:
   void getdata()
   {
      cout<<"\n Input Name:";
      cin>>strName;
      
    }
    
    void dispname()
    {cout<<"Name:"<<strName<<endl;}
};

class student:public person
{
private:
   char strSid[12];
public:
   void getdata()
   {
   person::getdata();
   cout<<"Input Student No:";cin>>strSid;
   }
   void dispdata()
   {
    cout<<"Student No: "<<strSid<<endl;
	dispname();
   };
   
};
void main()
{
   student stul; 
   cout<<"\n Input data for student:";
   stul.getdata();
   cout<<"student:"<<endl;
   stul.dispdata();
   }
