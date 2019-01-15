#include<iostream>
using namespace std; 



int main () 
{ 	
	char strName[]="ABC";
	char strSchoolName[]={'N','Y','U','\0'};
	char strBuilding[]={"WWH"};

	cout<<strName<<endl;
	cout<<"Size of strName "<<sizeof(strName)<<endl;
	cout<<"Length of strName "<<strlen(strName)<<endl<<endl;
	
	cout<<strSchoolName<<endl;

	cout<<"Size of strSchoolName "<<sizeof(strSchoolName)<<endl;
	cout<<"Length of strSchoolName "<<strlen(strSchoolName)<<endl<<endl;

	strcpy(strName,"X");
	cout<<strName<<endl;
	cout<<"Now size of strName "<<sizeof(strName)<<endl;
	cout<<"Now length of strName "<<strlen(strName)<<endl;

	strcpy(strName,"12345678937410938274");
	
	cout<<strName<<endl;
	cout<<strSchoolName<<endl;

	strcpy(strSchoolName,"123456789123456789809");
	



	return 0;
}


