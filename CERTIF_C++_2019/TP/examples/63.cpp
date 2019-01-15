#include<iostream.h>
#include<fstream.h>
main()
{
  ofstream pout("phone");
  if(! pout)
  {  
    cout<<"Cannot open phone file\n";
	return 1;
  }
  pout<<"chen xiao dong 010-66742088\n";
  pout<<"zhang fan xing 021-66442635\n";
  pout<<"jiang hai dai 025-88247722\n";
  pout.close();
  return 0;
}