#include <iostream>

using namespace std;



class A{

public:

   A(){className='A';}
    virtual ~A(){};
    void f() {cout << className<<endl;}
//private :
       char className;


};


class X : public A{
public :
    X(){className='X';}
    virtual ~X(){}
void f() {cout << className<<endl;}

};
int main()
{
   X *x=new X();
   x->f();
    return 0;
}
