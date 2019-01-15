#include<iostream.h>
ostream & setthex(ostream & stream)
{
  stream.setf(ios::hex|ios::uppercase|ios::showbase);
  return stream;
}
ostream & reset(ostream & stream)
{
  stream.unsetf(ios::hex|ios::uppercase|ios::showbase);
  return stream;
}
main()
{
  cout<<setthex<<200<<'\n';
  cout<<reset<<200<<'\n';
  return 0;
}