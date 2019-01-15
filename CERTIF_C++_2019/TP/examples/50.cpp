#include<iostream.h>

template<class data_t>
class list
{
  data_t data;
  list *next;
public:
  list(data_t d);
  void add(list *node)
  {
    node->next=this;
    next=0;
   }
   list *getnext(){return next;}
   data_t getdata(){return data;}
};

template<class data_t>
list<data_t>::list(data_t d)
{
  data=d;
  next=0;
}

main()
{
  list<char> aa('a');
  list<int> ia(0);
  list<char>*p, *last;
  list<char>*ip;
  int i;
  
  last=&aa;
  
  for(i=1;i<26;i++)
  {
    p=new list<char> ('a'+i);
    p->add(last);
    last=p;
  }
    
  p=&aa;
  while(p)
  {
    cout<<p->getdata()<<" ";
    p=p->getnext();
  }
  return 0;
}
