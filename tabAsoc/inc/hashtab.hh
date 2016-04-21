#ifndef HASHTAB_HH
#define HASHTAB_HH
#include "lista.hh"

class ihashtab
{
public:
  virtual void putItem(std::string key, int value)=0;
  virtual int getItem(std::string key)=0;

};



class hashtab : public ihashtab
{

  List tab[100];
  int Size;
public:
  /* hashtab(int size)
  {
    tab=new List[size];
    Size=size;
  }
  */
  hashtab(){Size=100;}
  virtual void putItem(std::string key, int value);
  virtual int getItem(std::string key);
};

#endif
