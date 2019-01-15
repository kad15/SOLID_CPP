#include<iostream.h>

class building
{
//protected:
//private:
   int nFloors;
   int nRooms;
   double dSquare;
};

class house :public building
{
  int nBedrooms;
  int nBalcony;
public:
  house(int f,int r,double sq,int br,int bal)
  {
    nFloors=f;
    nRooms=r;
    dSquare=sq;
    nBedrooms=br;
    nBalcony=bal;
  }
  void show()
  {
    cout<<"floors:"<<nFloors<<endl;
    cout<<"romms:"<<nRooms<<endl;
    cout<<"square measure:"<<dSquare<<endl;
    cout<<"bedrooms:"<<nBedrooms<<endl;
    cout<<"balcony:"<<nBalcony<<endl; 
	}
 };


main()
{
  house hou (6,120,5000,100,80);
  cout<<"House:"<<endl;
  hou.show();
  return 0;
}
