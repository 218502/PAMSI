#ifndef lista_hh
#define lista_hh
#include "node.hh"
class InterfaceList
{
public:
  virtual int add(HashEntry, int)=0;
  virtual void remove(int)=0;
  virtual HashEntry get(int)=0;
  virtual int size()=0;
};


class List : public InterfaceList
{
  int Size;
  node* head;
  node* temp;
  node* temp2;
public:
  List();
  int add(HashEntry element, int position);
  void remove(int position);
  HashEntry get(int position);
  int size();
};
#endif
