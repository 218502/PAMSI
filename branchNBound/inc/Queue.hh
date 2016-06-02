#ifndef QUEUE
#define QUEUE
#include "IQueue.hh"
template <class Typ>
class Queue: public IQueue<Typ>
{
protected:
  tablica1D <Typ> Tablica;
public:
 virtual int size(){return Tablica.Index() +1;}
  virtual bool isEmpty(){
    if(Tablica.Index() >= 0) return false;
    else return true;
  }
  virtual void enqueue(Typ item)
  {
    Tablica.DodajElement(item);
  }
  virtual Typ dequeue()
    throw (EmptyQueueException)
  {
    
    if (Tablica.Index() < 0) throw EmptyQueueException();
    else 
      return Tablica.UsunElement(0);
  }
  virtual Typ front()
    throw (EmptyQueueException)
  {
    if (Tablica.Index() < 0) throw EmptyQueueException();
    else 
      return Tablica[0];
  }
};
  
#endif
