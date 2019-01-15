#include <iostream.h>

int main () {
  char myarray[10];
  try
  {
    for (int n=0; n<=10; n++)
    {
      if (n>9) throw "Out of range";
      myarray[n]='z';
	  cout<<myarray[n]<<" ";
    }
  }
  catch (char * str)
  {
    cout << "Exception: " << str << endl;
  }
  return 0;
}
