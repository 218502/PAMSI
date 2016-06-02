#ifndef IQUEUE
#define IQUEUE

#include "tablica1d.hh"
#include "Exceptions.hh"

template <typename Typ>
class IQueue
{
public:
  virtual int size() = 0;
  virtual bool isEmpty() = 0;
  virtual void enqueue(Typ) =0;
  virtual Typ dequeue() = 0;
  virtual Typ front()=0;
  virtual ~IQueue() {};
};

#endif
