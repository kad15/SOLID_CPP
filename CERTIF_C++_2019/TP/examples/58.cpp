#include<iostream.h>
#include<math.h>
main()
{
  double x;
  cout.precision(5);
  cout<<"x ln e log x\n\n";
  for(x=2.0;x<=10.0;x++)
  {
    cout.width(2);
	cout<<x<<"";
	cout.width(10);
	cout<<log(x)<<"";
	cout.width(10);
	cout<<log10(x)<<'\n';
  }
  return 0;
}