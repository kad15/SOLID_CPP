#include<iostream.h>
class Time
{
  int hour;
  int minute;
  int second;
public:
  friend ostream& operator<<( ostream &, Time);
  friend istream& operator>>( istream &,Time &);
};
ostream& operator<<( ostream & out, Time t)
{
  out<<"\nHere's the time:\n";
  out<<t.hour<<":"<<t.minute<<":"<<t.second<<"\n";
  return out;
}
istream& operator>>( istream & in ,Time & t)
{
  cout<<"Please enter the time as follow\n";
  do{
    cout<<"What is the hour(0-23)?";
	in>>t.hour;
	if((t.hour<0)||(t.hour>23))
	cout<<"You have inpitted a wrong data! Please try again!\n";
  }while((t.hour<0)||(t.hour>23));
  do{
    cout<<"What is the minute(0-59)?";
	in>>t.minute;
	if((t.minute<0)||(t.minute>59))
	cout<<"You have inpitted a wrong data! Please try again!\n";
  }while((t.minute<0)||(t.minute>59));
  do{
    cout<<"What is the second(0-23)?";
	in>>t.second;
	if((t.second<0)||(t.second>59))
	cout<<"You have inpitted a wrong data! Please try again!\n";
  }while((t.second<0)||(t.second>59));
  return in;
}
main()
{
  Time now;
  cin>>now;       //输入时间
  cout<<now;      //显示时间
  return 0;
}