#include <iostream.h>

template <class T>
class pair {
    T value1, value2;
  public:
    pair (T first, T second)
      {value1=first; value2=second;}
    T module () {return 0;}
};

template <>
class pair <int> {
    int value1, value2;
  public:
    pair (int first, int second)
      {value1=first; value2=second;}
    int module ();
};

template <>
int pair<int>::module() {
  return value1%value2;
}

int main () {
  pair <int> myints (100,75);
  pair <float> myfloats (100.0,75.0);
  cout << myints.module() << '\n';
  cout << myfloats.module() << '\n';
  return 0;
}
