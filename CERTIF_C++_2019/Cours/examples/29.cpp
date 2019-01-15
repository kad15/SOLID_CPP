#include<iostream.h>
void static_count()
{
	static int nCount=0;
	nCount++;
	cout<<"Static_count exectued "<<nCount<<" times"<<endl;
}

void count()
{
	int nCount=0;
	nCount++;
	cout<<"Count exectued "<<nCount<<" times"<<endl;
}

class s
{
	static int c;
 
public:
	s(){c++;};
	int static get_count(){return c;};

}
;

int s::c=0;


main()
{
	for(int i = 0 ; i < 3 ; i++)
	{
		count();
		static_count();
	}
	

	cout<<"We have: "<<s::get_count()<<" objects of class s"<<endl;
	class s a ,b ,c,d;
	cout<<"Now we have: "<<s::get_count()<<" objects of class s"<<endl;
	cout<<s::get_count()<<endl;
	cout<<a.get_count()<<endl;
	
}

/*
Count exectued 1 times
Static_count exectued 1 times
Count exectued 1 times
Static_count exectued 2 times
Count exectued 1 times
Static_count exectued 3 times
We have: 0 objects of class s
Now we have: 4 objects of class s
4
4
Press any key to continue
*/