
#include<iostream.h>
class Sample
{
  int A[10][10];
public:
	int &operator()(int,int);
};
int &Sample::operator()(int x,int y)
{
  return A[x][y];
}
void main()
{
  Sample a;
  int i,j;
  for(i=0;i<10;i++)
	  for(j=0;j<10;j++)
		  a(i,j)=i+j;
	  for(i=0;i<10;i++)
		  cout<<a(i,1)<<" ";
	  cout<<endl;
}
