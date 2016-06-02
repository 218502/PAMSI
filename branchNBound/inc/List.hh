#ifndef LIST
#define LIST

#include "IList.hh"

template <typename Typ>
class List: public IList<Typ>
{
protected:
  tablica1D <Typ> Tablica;
public:
  virtual void add (Typ item, int index){Tablica.DodajElement(item, index);}
  virtual Typ remove(int index)
    throw (EmptyListException)
  {
    if(index > Tablica.Index())
      throw EmptyListException();
    else
      return Tablica.UsunElement(index);
  }
  virtual int size() const {return Tablica.Index()+1;}
  virtual bool isEmpty()
  {
    if(Tablica.Index() >= 0) return false;
    else return true;
  }
  virtual Typ get(int index) const
  {
    if (index > Tablica.Index())
      throw EmptyListException();
    else
      return Tablica[index];
  }

};

#endif
