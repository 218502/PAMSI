#ifndef ILIST
#define ILIST

#include "tablica1d.hh"
#include "Exceptions.hh"

template <typename Typ>
class IList
{
public:
  virtual ~IList() {};
  virtual void add(Typ, int)=0;
  virtual Typ remove(int)=0;
  virtual int size() const =0;
  virtual bool isEmpty()=0;
  virtual Typ get(int) const =0;
};


#endif
