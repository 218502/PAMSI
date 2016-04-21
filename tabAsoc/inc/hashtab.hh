#ifndef HASHTAB_HH
#define HASHTAB_HH
#include "lista.hh"
class hashtab
{

  List tab[10];
  int Size;
public:
  /* hashtab(int size)
  {
    tab=new List[size];
    Size=size;
  }
  */
  hashtab(){Size=10;}
  void putItem(std::string key, int value);
  int getItem(std::string key);
};

#endif
