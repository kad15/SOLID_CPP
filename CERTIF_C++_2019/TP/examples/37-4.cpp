
#include<iostream.h>
class Time
{
  int hour,minute,second;
public:
	Time(){};
	Time(int h,int m,int s)
	{
	  hour=h;minute=m;second=s;
	}
	Time(int h,int m)
	{
	  hour=h;minute=m;second=0;
	}
	Time(int h)
	{
	  hour=h;minute=0;second=0;
	}
	void sethour(int h){hour=h;}
	void setminute(int m){minute=m;}
	void setsecond(int s){second=s;}
    int gethour(){return hour;}
	int getminute(){return minute;}
	int getsecond(){return second;}
	Time operator+(Time);
	Time operator-(Time);
	void disp()
	{
	  cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
};
Time Time::operator+(Time t)
{
  int carry,hh,mm,ss;
  ss=getsecond()+t.getsecond();
  if(ss>60)
  {
    ss-=60;
	carry=1;
  }
  else carry=0;
  mm=getminute()+t.getminute()+carry;
  if(mm>60)
  {
    mm-=60;
	carry=1;
  }
  else carry=0;
  hh=gethour()+t.gethour()+carry;
  if(hh>24)
	  hh-=24;
  static Time result(hh,mm,ss);
  return result;
}
Time Time::operator-(Time t)
{
  int borrow,hh,mm,ss;
  ss=getsecond()-t.getsecond();
  if(ss<0)
  {
    ss+=60;
	borrow=1;
  }
  else borrow=0;
  mm=getminute()-t.getminute()-borrow;
  if(mm<0)
  {
    mm+=60;
	borrow=1;
  }
  else borrow=0;
  hh=gethour()-t.gethour()-borrow;
  if(hh<0)
	  hh+=24;
  static Time result(hh,mm,ss);
  return result;
}
void main()
{
  Time now(18,12,11);
  Time start(12,20);
  Time t1=now-start,t2=now+start;
  cout<<"Result: "<<endl;
  cout<<"now is: ";now.disp();
  cout<<"start at: ";start.disp();
  cout<<"Diff: ";t1.disp();
  cout<<"Add: ";t2.disp();
}

/*
Result:
now is: 18:12:11
start at: 12:20:0
Diff: 5:52:11
Add: 6:32:11
*/