#include<iostream.h>
#include<fstream.h>
main()
{
  ofstream out("test");
  if(! out)
  {  
    cout<<"Cannot open output file\n";
	return 1;
  }
  char nums[4]={'a','b','c','d'};
  out.write((char *)nums,sizeof(nums));
  out.close();
  ifstream in("test");
  if(! in)
  {  
    cout<<"Cannot open input file\n";
	return 1;
  }
  in.read((char *)& nums,sizeof(nums));
  int i;
  for(i=0;i<4;i++)
    cout<<nums[i]<<' ';
  cout<<'\n';
  cout<<in.gcount()<<"characters read\n";
  in.close();
  return 0;
}