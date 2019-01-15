#include<iostream.h>
int main(){

   int i;
	cout<<"Input an integer:";
	cin>>i;
	if ( i > 10) {cout<<"The input > 10"<<endl;} 
	else 
	{
		if (i==10) 
		{
			cout<<"The input = 10"<<endl;
		}
		else 
		{
			cout<<"The input < 10"<<endl;
		}
	}

	if (i) {cout<<"i is true"<<endl;} else {cout<<"i is false "<<endl;}
	if (10) {cout<<"I am always true"<<endl;} else {cout<<"IMPOSSIBLE!!!!";}
	return 0;
}
