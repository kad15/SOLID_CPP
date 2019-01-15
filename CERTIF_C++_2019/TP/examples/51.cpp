#include<iostream.h>
#include<string.h>

template<class T>
T min(T a,T b)
{
	return (a<b?a:b);
}

char *min(char *a,char *b)
{
	return (strcmp(a,b)<0?a:b);
}

void main()
{
  double a=3.56,b=8.23;
  char s1[]="Hello",s2[]="Good";

  cout<<" "<<a<<", "<<b<<" the min is "<<min(a,b)<<endl;
  cout<<" "<<s1<<", "<<s2<<" the min is "<<min(s1,s2)<<endl;
}