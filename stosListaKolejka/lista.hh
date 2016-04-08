#ifndef lista_hh
#define lista_hh
#include "node.hh"
class InterfaceList
{
public:
 virtual int add(int element)=0;
 virtual void remove()=0;
 virtual int get()=0;
 virtual int size()=0;
};


class List : public InterfaceList
{
  int rozmiar;
  node* poczatek;
  node* pomocnicza;
  int* koniec;
public:
  List();
  int add(int element);
  void remove();
  int get();
  int size();
};
#endif
