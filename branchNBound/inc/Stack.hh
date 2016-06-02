#ifndef STACK
#define STACK
#include "IStack.hh"
template <class Typ>
class Stack: public IStack <Typ>
{
protected:
  tablica1D <Typ> Tablica;
public:
  virtual int size(){return Tablica.Index() + 1; }
  virtual bool isEmpty(){
    if(Tablica.Index() >= 0) return false;
    else return true;
  }
  virtual void push(Typ item)
  {
    Tablica.DodajElement(item);
  }
  virtual Typ pop()
    throw (EmptyStackException)
  {
    if (Tablica.Index() < 0) throw EmptyStackException();
    return Tablica.UsunElement();
  }
  virtual Typ top()
    throw (EmptyStackException)
  {
    if (Tablica.Index() < 0) throw EmptyStackException();
    else return Tablica[Tablica.Index()];
  }
};


#endif
