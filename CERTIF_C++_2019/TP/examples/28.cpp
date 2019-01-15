#include<iostream.h>

class Circle
{
   float radius;
 public:
   Circle(float r) 
   {
     radius=r;
     cout<<"Circle Initialized!"<<endl;
    }
   ~Circle()  {cout<<"Circle Destroyed!"<<endl;}
   
   double Area() {return 3.14159*radius*radius;}
};

class Table
{
   float height;
 public:
   Table(float h)
   {
     height=h;
     cout<<"Table Initialized!"<<endl;
    }
   ~Table() {cout<<"Table Destroyed!"<<endl;}
   
   float Height()  {return height;}
};

class RoundTable:public Circle,public Table
{
  int color;
public:
   RoundTable(float r,float h,int c);
   int Color()  {return color;}
   ~RoundTable()  {cout<<"RoundTable Destroyed!"<<endl;}
};

RoundTable::RoundTable(float r,float h,int c)
      :Circle(r),Table(h)
{
   color=c;
   cout<<"RoundTable Initialized!"<<endl;
}

main()
{
   RoundTable cir_table(10.0,1.5,4);
   cout<<"The cir_table(10.0,1.5,4) properties are:"<<endl;
   cout<<"Area="<<cir_table.Area()<<endl;
   cout<<"Height="<<cir_table.Height()<<endl;
   cout<<"Color="<<cir_table.Color()<<endl;
}