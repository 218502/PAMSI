#ifndef HASHTAB_HH
#define HASHTAB_HH
#include "hashentry.hh"
#include "lista.hh"
class hashtab
{

  List *tab;
  int Size;
public:
  hashtab(int size)
  {
    tab=new List[size];
    Size=size;
  }

  int putItem(std::string key, int value)
  {
    ;
  }
  int getItem(std::string key)
  {
    ;
  }
};

#endif
