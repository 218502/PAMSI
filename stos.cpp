#include <iostream>
#include "lista.hh"
using namespace std;


class InterfaceStos
{
public:
  virtual void push(int element)=0;
  virtual int pop()=0;
  virtual int size()=0;
};



class Stos : public InterfaceStos
{
  int Size;
  List list;
  int pomocnicza;//zmienna do przechowywania zdejmowanego elementu
public:
  void push(int element)
  {
    list.add(element,Size);
  }
  int pop()
  {
    pomocnicza=list.get(Size);
    list.remove(Size);
    return pomocnicza;
  }
  int size()
  {
    return list.size();
  }
};


int main()
{
  ;
}
