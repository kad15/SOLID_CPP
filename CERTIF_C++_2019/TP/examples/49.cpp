#include<iostream.h>
#include<iomanip.h>

template<class T>
class Array
{
  T *elems;
  int size;
  public:
	  Array(int s);  //constructor
	  ~Array();
	  T& operator[] (int);//overloading []
	  void operator= (T);//overloading =
};

template<class T>
Array<T>::Array(int s)
{
  size=s;
  elems=new T[size];
}

template<class T>
Array<T>::~Array()
{
  delete elems;
}

template<class T>
T& Array<T>::operator[](int index)
{
    if (index > size) 
	{
		//do something;
	}
	return elems[index];
}

template<class T>
void Array<T>::operator = ( T temp)
{
	for(int i=0;i<size;i++)
		elems[i] = temp;
}

void main()
{
  int i,n=10;
  Array<int> arr1(n);
  Array<char> arr2(n);
  Array<float> arr3(n);
  
  for(i=0;i<n;i++)
  {
    arr1[i] = i ; //[] overloaded here;;
	arr2[i] = 'a'+ i;
	arr3[i] = 1.1 + i;
  }
  
  for(i=0;i<n;i++)
	  cout<<setw(8)<<arr1[i]<<setw(8)<<arr2[i]<<setw(8)<<arr3[i]<<endl;
}