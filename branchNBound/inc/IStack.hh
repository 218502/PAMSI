#ifndef ISTACK
#define ISTACK

#include "tablica1d.hh"
#include "Exceptions.hh"


template <typename Typ>
class IStack
{
public:
  virtual int size()=0;
  virtual bool isEmpty()=0;
  virtual void push(Typ)=0;
  virtual Typ pop()=0;
  virtual Typ top()=0;
};


#endif
