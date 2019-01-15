class A
{
	int x;
};

class B:public A
{
	int x;
};

void funcA(A x){};
void funcB(B x){};

main()
{
	A a;
	B b;
	a=b;
//	b=a; illegal assignment;
	funcA(b);
//	funcB(a); 
	A* pa;
	B* pb;
	pa=&b;
//	pb=&pa; illegal 

}