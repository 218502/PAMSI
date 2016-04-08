#ifndef lista_hh
#define lista_hh
#include "node.hh"
class InterfaceList
{
public:
  virtual int add(int element)=0;
 virtual void remove(int position)=0;
 virtual int get(int position)=0;
 virtual int size()=0;
};


class List : public InterfaceList
{
  int rozmiar;
  node* poczatek;
  node* pomocnicza;
  node* pomocnicza2;
  int* koniec;
public:
  List();
  int add(int element);
  void remove(int position);
  int get(int position);
  int size();
};
#endif
