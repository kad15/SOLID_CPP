#include<iostream.h>
class box
{
  int len;
public:
	box(int l){len=l;}
  friend ostream & operator<<(ostream & stream,box ob);
};
ostream & operator<<(ostream & stream,box ob)
{
  int i,j;
  for(i=0;i<ob.len;i++)stream<<'*';
  stream<<"\n";
  for(i=0;i<ob.len-2;i++)
  {
    stream<<'*';
	for(j=0;j<ob.len-2;j++)stream<<' ';
	stream<<"*\n";
  }
  for(i=0;i<ob.len;i++)stream<<'*';
  stream<<'\n';
  return stream;
}
main()
{
  box b1(4),b2(7);
  cout<<b1<<endl<<b2;
  return 0;
}