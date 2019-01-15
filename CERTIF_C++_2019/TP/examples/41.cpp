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
      cout<<"Input Name: ";
      cin>>strName;
      
    }
    
    void disp()  
    {
		cout<<"Name:"<<strName<<endl;
	}

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
   void disp()
   {
    cout<<"Student No: "<<strSid<<endl;
	person::disp();
   };

   
};

void showclass(person &x)
{
	x.disp();
}

int main()
{
   student stu1; 
   cout<<"Input data for student:"<<endl;
   stu1.getdata();
   cout<<"Result: "<<endl;
   showclass(stu1);
   return 12;

   }
